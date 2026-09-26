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
    vector<int> t(n);
    rep(i,n) cin >> t[i];
    int total = 0;
    rep(i,n) total += t[i];
    vector<bool> dp(total+1);
    dp[0] = true;
    rep(j,n){
        for(int i = total; i >= 0; i--){
            if(dp[i] == true && i + t[j] < total+1){
                dp[i + t[j]] = true;
            }
        }
    }
    int ans = (total+1)/2;
    //cout << ans << endl;
    while(dp[ans] == false){
        ans++;
    }
    cout << ans << endl;
    return 0;
}