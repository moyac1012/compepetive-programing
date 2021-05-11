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
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = abs(h[0]-h[1]);
    Rep(i, 2, n){
        dp[i] = min(dp[i-2]+abs(h[i-2]-h[i]), dp[i-1]+abs(h[i-1]-h[i]));
    }
    cout << dp[n-1] << endl;
    return 0;
}