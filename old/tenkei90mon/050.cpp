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
    int n,l; cin >> n >> l;
    vector<int> dp(100001);
    dp[0] = 1;
    rep(i,100001){
        if(i+1 <= 100000) {
            dp[i+1] += dp[i];
            dp[i+1] %= MOD;
        }
        if(i+l <= 100000) {
            dp[i+l] += dp[i];
            dp[i+1] %= MOD;
        }
    }
    cout << dp[n] << endl;
    return 0;
}