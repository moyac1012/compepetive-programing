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

int dp[400][400][400];
const int INF = 1e8;
int main(){
    int n; cin >> n;
    int x,y; cin >> x >> y;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];

    rep(i,400)rep(j,400)rep(k,400) dp[i][j][k] = INF;
    dp[0][0][0] = 0;
    rep(i,n)rep(j,x+1)rep(k,y+1){
        if(dp[i][j][k] < INF){
            dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
            dp[i+1][min(j+a[i], x)][min(k+b[i], y)] = 
                min(dp[i+1][min(j+a[i], x)][min(k+b[i], y)],
                    dp[i][j][k]+1);
        }
    }

    if(dp[n][x][y] == INF) cout << -1 << endl;
    else cout << dp[n][x][y] << endl;

    return 0;
}