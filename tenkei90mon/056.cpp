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
bool dp[105][100005];
int main(){
    int n,s; cin >> n >> s;
    vector<int> a(n+1),b(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i] >> b[i];

    rep(i,105)rep(j,10005) dp[i][j] = false;
    dp[1][a[1]] = true;
    dp[1][b[1]] = true;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= s; j++){
            if(dp[i-1][j - a[i]] && j >= a[i]) dp[i][j] = true;
            if(dp[i-1][j - b[i]] && j >= b[i]) dp[i][j] = true;
        }
    }

    // Rep(i,1,n+1){
    //     Rep(j,1,s+1){
    //         cout << dp[i][j];
    //     }
    //     cout << endl;
    // }

    string ans = "";
    if(dp[n][s]){
        int see = s;
        for(int i = n; i >= 2; i--){
            if(dp[i-1][see - a[i]] && see - a[i] > 0) {
                ans = 'A' + ans;
                see -= a[i];
            }else{
                ans = 'B' + ans;
                see -= b[i];
            }
        }
        if(see == a[1]) ans = 'A' + ans;
        else ans = 'B' + ans;
        cout << ans << endl;
        
    }else{
         cout << "Impossible" << endl;
    }
    return 0;
}