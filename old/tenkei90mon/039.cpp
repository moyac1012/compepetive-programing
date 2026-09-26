#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
vector<ll> dp(100005);
void dfs(Graph &G, int v, int p){
    dp[v] = 1;
    for(int next_v : G[v]){
        if(next_v == p) continue;
        dfs(G, next_v, v);
        dp[v] += dp[next_v];
    }
}
int main(){
    int n; cin >> n;
    Graph G(n);
    vector<int> a(n), b(n);
    rep(i,n-1){
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }
    dfs(G, 0, -1);
    ll ans = 0;
    rep(i,n){
        ll t = min(dp[a[i]], dp[b[i]]);
        ans += t*(n-t);
    }
    cout << ans << endl;
    return 0;
}