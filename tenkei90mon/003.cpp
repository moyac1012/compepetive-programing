#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
vector<int> dist(100000);

void dfs(Graph &G, int v, int p, int d){
    dist[v] = d;
    for(auto next_v : G[v]){
        if(next_v == p) continue;
        dfs(G, next_v, v, d+1);
    }
}

int main(){
    int n; cin >> n;
    Graph G(n);
    
    rep(i,n-1){
        int a,b; cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    dfs(G, 0, -1, 0);
    int maxd = 0, maxdi = 0;
    rep(i,n){
        if(dist[i] >= maxd){
            maxdi = i;
            maxd = dist[i];
        }
    }
    dist.assign(0, n);
    dfs(G, maxdi, -1, 0);
    maxd = 0;
    rep(i,n) maxd = max(maxd, dist[i]);
    cout << maxd + 1 << endl;
    return 0;
}