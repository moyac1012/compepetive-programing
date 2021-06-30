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

int main(){
    int h,w; cin >> h >> w;
    vector<vector<ll>> a(h, vector<ll>(w));
    vector<vector<ll>> b(h, vector<ll>(w));
    rep(i,h)rep(j,w) cin >> a[i][j];
    rep(i,h)rep(j,w) cin >> b[i][j];

    vector<vector<ll>> c(h, vector<ll>(w));
    rep(i,h)rep(j,w) c[i][j] = a[i][j] - b[i][j];
    ll cnt = 0;

    rep(i,h-1){
        rep(j,w-1){
            int v = c[i][j];
            cnt += abs(v);
            c[i][j] -= v;
            c[i+1][j] -= v;
            c[i][j+1] -= v;
            c[i+1][j+1] -= v;
        }
    }
    
    bool f = true;
    rep(i,h)rep(j,w) if(c[i][j] != 0) f = false;
    if(f) cout <<  "Yes" << endl << cnt << endl;
    else cout << "No" << endl;
    return 0;
}