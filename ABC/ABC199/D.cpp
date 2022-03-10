#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
ll n, m; 
vector<bool> seen;
vector<int> seibun;
void dfs(Graph &G, int v){
    seen[v] = true;
    seibun[v] = true;
    for(auto next_v : G[v]) {
        if(seen[next_v]) continue;
        dfs(G, next_v);
    }
}
int main(){
    cin >> n >> m;
    seibun = vector<int>(n);
	Graph G(n);
    rep(i,m){
        int a,b; cin >> a >> b;
        a--; b--;
        G[b].push_back(a);
        G[a].push_back(b);
    }

    seen.assign(n, false);
    vector<int> c;
    ll ans = 1;
    for(int v = 0; v < n; v++){
        if(seen[v]) continue;
        dfs(G, v);
        for(int i = 0; i < n; i++){
            ll color = 3;
            if(seibun[i] >= 1){
                for(auto x : G[i]){
                    for(auto y : c){
                        if(x == y) color--;
                    }
                }
                if(color <= 0){
                    cout << 0 << endl;
                    return 0;
                }else{
                    c.push_back(i);
                    ans *= color;
                }
            }
        }
        rep(i,n) seibun[i] = 0;
    }
    cout << ans << endl;
    return 0;
}