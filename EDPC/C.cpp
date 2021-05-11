#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    rep(i,n) cin >> a[i][0] >> a[i][1] >> a[i][2];
    vector<vector<int>> dp(100050, vector<int>(3));
    dp[0][0] = a[0][0];
    dp[0][1] = a[0][1];
    dp[0][2] = a[0][2];
    Rep(i,1,n){
        rep(j,3){
            dp[i][j] = max(dp[i-1][(j+1)%3]+ a[i][j],dp[i-1][(j+2)%3]+ a[i][j]);
        }
    }
    int ans = 0;
    rep(i,3){
        ans = max(ans, dp[n-1][i]);
    }
    cout << ans << endl;
    return 0;
}