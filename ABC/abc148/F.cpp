#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
vector<int> depth;  //深さ
void dfs(const Graph &G, int v, int p, int d){
    depth[v] = d;
    for(auto next_v : G[v]){
        if(next_v == p) continue;
        dfs(G, next_v, v, d+1);
    }
}

int main(){
    int n, u, v;
    cin >> n >> u >> v;
    u--; v--;
    Graph G(n);
    depth.assign(n, u);
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int root = u;
    dfs(G, root, -1, 0);
    rep(i,n){
        cout << i + 1 << ": depth = " << depth[i] << endl;
    }
    rep(i,depth.size()){

    }
    

    return 0;
}