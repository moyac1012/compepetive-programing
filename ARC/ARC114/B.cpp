#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
vector<bool> seen;
const ll MOD = 998244353;

void dfs(Graph &G, int v){
    seen[v] = true;
    for(auto next_v : G[v]) {
        if(seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> f(n);
    rep(i,n) cin >> f[i];
    rep(i,n) f[i]--;

    Graph G(n);
    rep(i,n){
        G[i].push_back(f[i]);
        G[f[i]].push_back(i);
    }

    seen.assign(n, false);
    int cnt = 0;
    for(int v = 0; v < n; v++){
        if(seen[v]) continue;
        dfs(G, v);
        cnt++;
    }
    ll ans = 1;
    rep(i, cnt){
        ans *= 2;
        ans %= MOD;
    }
    cout << ans-1 << endl;
    return 0;
}