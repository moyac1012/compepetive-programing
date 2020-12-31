#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF 100000000

int main(){
    int N, K;
    cin >> N >> K;

    vector<int> h(N);
    rep(i,N) cin >> h[i];
    vector<int> dp(N);
    rep(i,N) dp[i] = INF;

    dp[0] = 0;
    for (size_t i = 1; i < N; i++)
    {
        dp[i] = min(dp[i], dp[i-1]+abs(h[i]-h[i-1]));
        if(i > 1) dp[i] = min(dp[i], dp[i-2]+abs(h[i-2]-h[i]));
    }
    
    cout << dp[N-1]<< endl;

}