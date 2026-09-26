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
ll MOD = 1e9+7;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    vector<vector<ll>> dp(10,vector<ll>(100005));
    dp[0][0] = 1;
    rep(i,8){
        rep(j,s.length()){
            dp[i][j+1] += dp[i][j];
            if(i == 0 && s[j] == 'a') dp[i+1][j+1] += dp[i][j];
            if(i == 1 && s[j] == 't') dp[i+1][j+1] += dp[i][j];
            if(i == 2 && s[j] == 'c') dp[i+1][j+1] += dp[i][j];
            if(i == 3 && s[j] == 'o') dp[i+1][j+1] += dp[i][j];
            if(i == 4 && s[j] == 'd') dp[i+1][j+1] += dp[i][j];
            if(i == 5 && s[j] == 'e') dp[i+1][j+1] += dp[i][j];
            if(i == 6 && s[j] == 'r') dp[i+1][j+1] += dp[i][j];
            dp[i][j+1] %= MOD;
            dp[i+1][j+1] %= MOD;
        }
    }
    cout << dp[7][s.length()] << endl;
    // rep(i,8){
    //     rep(j,s.length()+1){
    //         cout << dp[i][j] << "\t";
    //     }
    //     cout << endl;
    // }
    return 0;
}