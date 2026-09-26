#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
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
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }
int n;
vector<ll> a, b;

vector<ll> f(ll a){
    vector<ll> ans;
    for(int i = 1; i * i < a; i++){
        if(a%i == 0) {
            ans.push_back(i);
            if(i != a/i) ans.push_back(a/i);
        }
    }
    return ans;
}

bool ok(ll x, ll y){
    bool flag = true;
    rep(i,n){
        if((a[i]%x != 0 || b[i]%y != 0 ) && (a[i]%y != 0 || b[i]%x != 0 )) flag = false;
    }
    return flag;
}

int main(){
    cin >> n;
    a.assign(n,0);
    b.assign(n,0);
    rep(i,n) cin >> a[i] >> b[i];
    vector<ll> d1 = f(a[0]);
    vector<ll> d2 = f(b[0]);

    ll ans = 1;
    for(ll x : d1){
        for(ll y : d2){
            if(ok(x,y)) ans = max(ans, lcm(x,y));
        }
    }
    cout << ans << endl;
    return 0;
}