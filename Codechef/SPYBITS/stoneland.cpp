#include <bits/stdc++.h>
using namespace std;

int t, n, m;
int ar[100005];
int tree[400005];
int suff[100005];
int pref[100005];
int next_t[100005];
int prev_t[100005];
int next_e[100005];
int prev_e[100005];
stack<int> st;

void build(int v, int tl, int tr) {
	if (tl == tr) {
		tree[v] = tl;
		return;
	}
	int tm = (tl + tr) / 2;
	build(2 * v, tl, tm);
	build(2 * v + 1, tm + 1, tr);
	if (ar[tree[2 * v]] > ar[tree[2 * v + 1]]) tree[v] = tree[2 * v];
	else tree[v] = tree[2 * v + 1];
}

int query(int v, int tl, int tr, int l, int r) {
	if (l <= tl && tr <= r) return tree[v];
	if (r < tl || l > tr) return -1;
	int tm = (tl + tr) / 2;
	int a = query(2 * v, tl, tm, l, r);
	int b = query(2 * v + 1, tm + 1, tr, l, r);
	if (b == -1 || ar[a] > ar[b]) return a;
	else return b;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> ar[i];
			next_t[i] = -1;
			prev_t[i] = -1;
			next_e[i] = -1;
			prev_e[i] = -1;
			suff[i] = 0;
			pref[i] = 0;
		}
		build(1, 0, n - 1);
		for (int i = 0; i < n; i++) {
			while (!st.empty() && ar[st.top()] < ar[i]) {
				next_t[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}
		while (!st.empty()) st.pop();
		for (int i = n - 1; i >= 0; i--) {
			while (!st.empty() && ar[st.top()] < ar[i]) {
				prev_t[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}
		while (!st.empty()) st.pop();
		for (int i = 0; i < n; i++) {
			while (!st.empty() && ar[st.top()] <= ar[i]) {
				next_e[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}
		while (!st.empty()) st.pop();
		for (int i = n - 1; i >= 0; i--) {
			while (!st.empty() && ar[st.top()] <= ar[i]) {
				prev_e[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}
		while (!st.empty()) st.pop();
		for (int i = 0; i < n; i++) {
			if (prev_t[i] == -1) pref[i] += 0;
			else pref[i] += 1 + pref[prev_t[i]];
		}
		for (int i = n - 1; i >= 0; i--) {
			if (next_t[i] == -1) suff[i] += 0;
			else suff[i] += 1 + suff[next_t[i]];
		}
		while (m--) {
			int l, r; cin >> l >> r;
			int res = 0;
			int ind = query(1, 0, n - 1, min(l - 1, r - 1), max(l - 1, r - 1));
			cout << suff[ind] << '\n';
		}
	}
}
