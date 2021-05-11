#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,k; cin >> n >> k;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];
    vector<ll> dp(100050, 1e18);
    dp[0] = 0;
    Rep(i,1,n){
        for(int j = 1; j <= k; j++){
            if(i - j < 0) break;
            dp[i] = min(dp[i], dp[i-j] + abs(h[i-j]-h[i]));
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}