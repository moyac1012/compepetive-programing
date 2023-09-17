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
ll a[100009], b[100009];
ll dp[100009];
int main(){
    ll n; cin >> n;
    Rep(i,1,n) cin >> a[i];
    Rep(i,1,n) cin >> b[i];
    for(ll i = 1; i <= n; i++) dp[i] = -10000;
    dp[1] = 0;
    for(ll i = 1; i <= n-1; i++){
        dp[a[i]] = max(dp[a[i]], dp[i]+100);
        dp[b[i]] = max(dp[b[i]], dp[i]+150);
    }
    cout << dp[n] << endl;
    return 0;
}