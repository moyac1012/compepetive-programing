#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for(ll i = 0; i < (ll)(n); i++)
#define Rep(i,j,n) for(ll i = j; i < (ll)(n); i++)
using Graph = vector<vector<ll>>;
using P = pair<ll, ll>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};
const char alp[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
template<typename T_n> void prll_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }

int main(){
    ll N,W; cin >> N >> W;
    vector<ll> w(N+1),v(N+1);
    Rep(i,1,N+1) cin >> w[i] >> v[i];
    // dp[i][j] := i番目の荷物まで選べるとき、jkg以下にできる価値の最大値
    vector<vector<ll>> dp(N+1, vector<ll>(W+1));
    for(ll i = 1; i <= N; i++){
        for(ll j = 1; j <= W; j++){
            if(j-w[i] >= 0) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    // rep(i,N+1) prll_vec(dp[i]);
    cout << dp[N][W] << endl;

    return 0;
}