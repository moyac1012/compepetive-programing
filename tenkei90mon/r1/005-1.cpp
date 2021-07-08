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
ll dp [10005][31];
ll MOD = 1e9+7;
int main(){
    ll n,b,k;
    cin >> n >> b >> k;
    vector<ll> c(k);
    rep(i,k) cin >> c[i];
    dp[0][0] = 1;
    rep(i,n)rep(j,b){
        rep(l,k){
            dp[i+1][(10*j+c[l])%b] += dp[i][j];
            dp[i+1][(10*j+c[l])%b] %= MOD;
        }
    }
    // rep(i,n+1){
    //     rep(j,b){
    //         cout << dp[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    cout << dp[n][0] << endl;
    return 0;   
}