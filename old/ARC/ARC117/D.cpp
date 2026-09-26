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
    int n; cin >> n;
    Graph G(n);
    depth.assign(n, 0);
    rep(i,n-1){
        int a, b; cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int root = 0;
    dfs(G, root, -1, 0);
    int maxdepth = 0;
    rep(i,depth.size()){
        if(maxdepth < depth[i]){
            maxdepth = depth[i];
            root = i;
        }
    }
    int cnt = 0;
    rep(i,depth.size()){
        if(depth[i] == maxdepth) cnt++;
    }
    
    depth.assign(n, 0);
    dfs(G, root, -1, 0);
    
    rep(i, depth.size()){
        cout << depth[i] + 1 << " ";
    }
    cout << endl;
    return 0;
}