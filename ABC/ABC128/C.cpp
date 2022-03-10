#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m; cin >> n >> m;
    Graph G(n);
    rep(i,m){
        int k; cin >> k;
        rep(j,k){
            int s; cin >> s;
            s--;
            G[s].push_back(i);
        }
    }
    vector<int> p(m);
    rep(i,m) cin >> p[i];
    int ans = 0;
    for(int bit = 0; bit < (1<<n); bit++){
        vector<int> cnt(m);
        for(int i = 0; i < n; i++){
            if(bit & (1<<i)){
                for(int v : G[i]) cnt[v]++;
            }
        }
        bool f = true;
        rep(i,m){
            if(cnt[i]%2 != p[i]) f = false;
        }
        if(f) ans++;
    }
    
    cout << ans << endl;
    return 0;
}