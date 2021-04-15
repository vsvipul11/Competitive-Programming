#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<long long> boys(n), girls(n);
		for (int i = 0; i < n; i++) {
			cin >> boys[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> girls[i];
		}
		
		sort(boys.rbegin(), boys.rend());
		
		sort(girls.begin(), girls.end());
		auto GetMax = [&](long long a, long long b) {
			return (a > b ? a : b);
		};
		long long likeness_value = LLONG_MIN;
		for (int i = 0; i < n; i++) {
			
			likeness_value = GetMax(likeness_value, boys[i] + girls[i]);
		}
		cout << likeness_value << '\n';
	}
	return 0;
}
