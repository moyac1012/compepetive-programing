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
int INF = 1001001001;

int main(){
    int n,m; cin >> n >> m;
    vector<vector<int>> d(n,vector<int>(n,INF));
    rep(i,n) d[i][i] = 0;
    rep(i,m){
        int a,b,c; cin >> a >> b >> c;
        a--; b--;
        d[a][b] = c;
    }
    ll ans = 0;
    rep(k,n){
        rep(i,n)rep(j,n){
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            if(d[i][j] != INF) ans += d[i][j];
        }
    }
    cout << ans << endl;
    return 0;
}