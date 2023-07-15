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
ll n,t,m;
vector<ll> r(n);
bool ncnt(){
    set<ll> st;
    rep(i,r.size()) st.insert(r[i]);
    return st.size() == t;
}

void next_r(){
    r[n-1]++;
    for(ll i=n-1; i >= 0; i--){
        if(r[i] >= t){
            r[i] = 0;
            r[i-1]++;
        }
    }
}

bool allt_1(){
    rep(i,n){
        if(r[i] != t-1) return false;
    }
    return true;
}

bool ok(vector<ll> a, vector<ll> b){
    rep(i,m){
        if(r[a[i]] == r[b[i]]) return false;
    }
    return true;
}

ll fact(ll n){
    ll ans = 1;
    for(ll i = 1; i <=n; i++) ans *= i;
    return ans;
}

int main(){
    cin >> n >> t >> m;
    vector<ll> a(m), b(m);
    r.resize(n);
    rep(i,m) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }
    ll cnt = 0;
    while(true){
        if(allt_1()) break;
        next_r();
        if(!ncnt()) continue;
        if(ok(a,b)) cnt++;
    }
    cout << cnt/fact(t) << endl;
    return 0;
}