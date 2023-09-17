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
const char alp[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }
int dp[2003][2003];
int main(){
    int n; cin >> n;
    vector<int> p(n+1), a(n+1);
    Rep(i,1, n+1) cin >> p[i] >> a[i];
    // dp[i][j] := 区間i~jが残っているときの点数の最大値
    dp[1][n] = 0;
    for(int i = 1; i <= n; i++){    
        for(int j = n; j>= i; j--){
            int s1 = 0;
            if(i-1 >= 0) if(i <= p[i-1] && p[i-1] <= j) s1 = a[i-1];
            int s2 = 0;
            if(j+1 <= n) if(i <= p[j+1] && p[j+1] <= j) s2 = a[j+1];

            if(i == 1){
                dp[i][j] = dp[i][j+1] + s2;
            }else if(j == n){
                dp[i][j] = dp[i-1][j] + s1;
            }else{
                dp[i][j] = max(dp[i-1][j]+s1, dp[i][j+1]+s2);
            }
        }
    }
    int ans = 0;
    Rep(i,1,n+1) ans = max(ans, dp[i][i]);
    cout << ans << endl;
    return 0;
}