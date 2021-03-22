#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
//連結成分数を数える
int n,m;
vector<bool> seen;
void dfs(const Graph &G, int v){
    seen[v] = true;
    for(auto next_v : G[v]){
        if(seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main(){ 
    cin >> n >> m;
    Graph G(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int cnt = 0;
    seen.assign(n, false);
    rep(v,n){
        if(seen[v]) continue;
        dfs(G, v);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}