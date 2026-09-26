#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec, int n) { rep(i,n) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }

int main(){
    ll n,a,b;
    cin >> n >> a >> b;
    vector<ll> x(100005);
    rep(i,n) cin >> x[i];
    vector<ll> dp(100005);
    dp[0] = 0;  
    for(int i = 0; i < n-1; i++){
        dp[i+1] = dp[i] + min(a*(x[i+1] - x[i]), b);
    }
    //print_vec(dp,n+1);
    cout << dp[n-1] << endl;
    return 0;
}