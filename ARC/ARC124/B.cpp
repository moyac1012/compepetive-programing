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

int main(){
    int n; cin >> n;
    vector<ll> a(n), b(n);
    rep(i,n)  cin >> a[i];
    rep(i,n)  cin >> b[i];
    vector<ll> sorted_b = b;
    vector<ll> c(n);
    sort(sorted_b.begin(), sorted_b.end());
    ll cnt = 0;
    vector<ll> ans;
    set<ll> candicates;
    for(ll x : b) candicates.insert(a[0]^x);
    
    for(auto x : candicates){
        rep(i,n){
            c[i] = (a[i]^x);
        }
        sort(c.begin(), c.end());
        if(sorted_b == c) {
            cnt++;
            ans.push_back(x);
        }
    }
    cout << cnt << endl;
    sort(ans.begin(), ans.end());
    rep(i,ans.size()) cout << ans[i] << endl;
    return 0;
}