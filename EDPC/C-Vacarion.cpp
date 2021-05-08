#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    rep(i,n)rep(j,3) cin >> a[i][j];
    vector<vector<int>> dp(n, vector<int>(3));
    dp[0][0] = a[0][0];
    dp[0][1] = a[0][1];
    dp[0][2] = a[0][2];
    for(int i = 1; i < n; i++){
        for(int j = 0; j < 3; j++){
            dp[i][j] = max(dp[i-1][(j+1)%3] + a[i][j], dp[i-1][(j+2)%3] + a[i][j]);
        }
    }
    // rep(i,dp.size()){
    //     rep(j, dp[0].size()){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << max(max(dp[n-1][0], dp[n-1][1]), dp[n-1][2]) << endl;
    return 0;
}