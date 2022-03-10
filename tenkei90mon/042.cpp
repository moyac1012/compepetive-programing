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
ll MOD = 1e9+7;
int main(){
    ll k; cin >> k;
    if(k%9 != 0){
        cout << 0 << endl;
        return 0;
    }
    vector<ll> dp(100000);
    dp[0] = 1;
    Rep(i,1,100001){
        int a = min(i,9);
        Rep(j,1,a+1) dp[i] += dp[i-j];
        dp[i] %= MOD;
    }
    cout << dp[k] << endl;
    return 0;
}