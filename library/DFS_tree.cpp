#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
vector<int> depth;  //深さ
vector<int> subtree_size;
void dfs(const Graph &G, int v, int p, int d){
    depth[v] = d;
    for(auto next_v : G[v]){
        if(next_v == p) continue;
        dfs(G, next_v, v, d+1);
    }

    subtree_size[v] = 1;
    for(auto c : G[v]){
        if(c == p) continue;
        subtree_size[v] += subtree_size[c];
    }

}

int main(){
    int n; cin >> n;
    Graph G(n);
    depth.assign(n, 0);
    subtree_size.assign(n,0);
    rep(i,n-1){
        int a, b; cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int root = 0;
    dfs(G, root, -1, 0);
    rep(i,n){
        cout << i + 1 << ": depth = " << depth[i] << ", subtree_size = " << subtree_size[i] << endl;
    }
    return 0;
}