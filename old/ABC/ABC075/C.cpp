#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
vector<bool> seen;
void dfs(Graph &G, int v, int j, int m){
    seen[v] = true;
    for(auto next_v : G[v]){
        if(seen[next_v]) continue;
        if(j == v && m == next_v || j == next_v && m == v) continue;
        dfs(G, next_v, j, m);
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    Graph G(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    int ans = 0;
    rep(j,n){
        for(auto v : G[j]){
            seen.assign(n, false);
            int cnt = 0;
            rep(i,n){
                if(seen[i]) continue;
                dfs(G,i, j,v);
                cnt++;
            }
            if(cnt > 1) ans++;
        }
    }
    cout << ans/2 << endl;
    return 0;
}