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
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    vector<vector<ll>> r(5005, vector<ll>(5005));
    rep(i,n) r[a[i]+1][b[i]+1]++;
    rep(i,5004){
        rep(j,5004){
            r[i][j+1] += r[i][j]; 
        }
    }
    rep(i,5004){
        rep(j,5004){
            r[i+1][j] += r[i][j]; 
        }
    }

    ll ans = 0;
    Rep(i,1,5001-k+1){
        Rep(j,1,5001-k+1){
            ans = max(ans, r[i+k+1][j+k+1] - r[i][j+k+1] - r[i+k+1][j] + r[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}