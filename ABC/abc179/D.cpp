#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,k;
    cin >> n >> k;
    set<int> S;
    ll MOD = 998244353;
    rep(i,k){
        int r, l;
        cin >> r >> l;
        S.insert(r);
        S.insert(l);
        rep(j,r-l-1){
            S.insert(r+j+1);
        }
    }
    vector<int> a;
    for (auto itr = S.begin(); itr != S.end(); ++itr) {
        a.push_back(*itr);
    }

    int dp[a.size()+10][20010];

    memset(dp, 0, sizeof(dp));   // 一旦すべて 0 に
    dp[0][0] = 1;                // dp[0][0] だけ 1 に
    int A = n-1;
    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j <= A; ++j) {
        (dp[i+1][j] += dp[i][j]) %= MOD;
        if (j >= a[i]) (dp[i+1][j] += dp[i][j-a[i]]) %= MOD;
        }
    }

    int ans = dp[a.size()][A];

    // rep(i,a.size()){
    //     if(A%a[i] == 0) ans++;
    //     ans %= MOD;
    // }

    cout << ans%MOD << endl;
    
    return 0;
}