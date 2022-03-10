#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;
vector<bool> seen;
int ans = 0;
bool f(vector<bool> seen){
    rep(i,seen.size()){
        if(seen[i] == false){
            return false;
        }
    }
    return true;
}

void dfs(Graph &G, int v){
    seen[v] = true;
    if(f(seen)) ans++;
    for(auto next_v : G[v]){
        if(seen[next_v]) continue;
        dfs(G, next_v);
    }
    seen[v] = false;
}

int main()
{
    int n,m; 
    cin >> n >> m;
    Graph G(n);
    rep(i,m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[b].push_back(a);
        G[a].push_back(b);
    }
    seen.assign(n, false);
    dfs(G, 0);
    cout << ans << endl;
}