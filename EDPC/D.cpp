#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n, w0;
    cin >> n >> w0;
    vector<ll> w(n+1), v(n+1);
    rep(i,n) cin >> w[i+1] >> v[i+1];
    vector<vector<ll>> dp(110, vector<ll>(100100));
    Rep(i,1,n+1)rep(j,w0+1){
        if(j - w[i] >= 0) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
        else dp[i][j] = dp[i-1][j];
    }
    // rep(i,n+1){
    //     rep(j,w0+1){
    //         cout << dp[i][j] << "\t";
    //     }
    //     cout << endl;
    // }
    cout << dp[n][w0] << endl;
    return 0;
}