#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
using P = pair<int, int>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    set<ll> s;
    for(int x : a){
        for(int i = 1; i * i < x; i++){
            if(x%i == 0) {
                s.insert(i);
                if(x%i != i) s.insert(x/i);
            }
        }
    }
    vector<bool> cnt(m+1);
    for(auto i = s.begin(); i != s.end(); i++){
        if(*i == 1) continue;
        if(cnt[*i]) continue;
        int j = 1;
        while(*i*j <= m){
            cnt[*i*j] = true;
            j++;
        }
    }
    ll ans = 0;
    Rep(i,1,m+1) if(!cnt[i]) ans++;
    cout << ans << endl;
    Rep(i,1,m+1){
        if(!cnt[i]) cout << i << endl;
    }
    return 0;
}