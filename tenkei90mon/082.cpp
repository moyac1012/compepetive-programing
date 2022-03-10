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
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { ll b = m, u = 1, v = 0; while (b) { ll t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }
unsigned long long l, r;
unsigned long long power10[22];
ll MOD = 1e9+7;
ll f(ll n){
    n %= MOD;
    n = n*(n+1)%MOD;
    return n*modinv(2LL,MOD)%MOD;
}
void init(){
    power10[0] = 1;
	for (int i = 1; i <= 19; i++) power10[i] = (10ULL * power10[i - 1]);
}
int main(){
    init();
    cin >> l >> r;
    vector<ll> e(20);
    for(int i = 1; i <= 19; i++){
        unsigned long long vl = max(l, power10[i-1]);
        unsigned long long vr = min(r, power10[i]-1ULL);
        if(vl > vr) continue;
        e[i] = f(vr) - f(vl-1) % MOD;
        e[i] += MOD;
        e[i] %= MOD;
    }
    ll ans = 0;
    for(int i = 1; i <= 19; i++) {
        ans += e[i]*i;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}