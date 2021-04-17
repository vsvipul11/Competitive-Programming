#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

const int MAX = 100005;

void dfs(vector<pair<ll,ll>> g[], ll root, ll par, ll dep, ll tot, vector<ll> &pos){
    if(g[root].size() == 1 && root){
        pos.pb(tot);
    }
    for(auto child : g[root]){
        if(child.first != par){
            dfs(g, child.first, root, dep+1, tot + (child.second*dep), pos);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        ll tar[m];
        for(int i=0; i<m; i++){
            cin>>tar[i];
        }
        sort(tar, tar+m);
        vector<pair<ll,ll>> g[n];
        vector<ll> pos;
        for(int i=1; i<n; i++){
            ll a, b, val;
            cin>>a>>b>>val;
            a--;
            b--;
            g[a].pb({b, val});
            g[b].pb({a, val});
        }
        dfs(g, 0LL, 0LL, 1LL, 0LL, pos);
        int j=0;
        sort(pos.begin(), pos.end());
        ll res =  0;
        for(auto val: pos){
            while(j<m && tar[j] < val){
                j++;
            }
            if(j<m){
                j++;
                res++;
            }else{
                break;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
