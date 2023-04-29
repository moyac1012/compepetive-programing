#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int k,n;
    cin >> k >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = 1e7;
    rep(i,n){
        if(i == 0){
            ans = min(a[n-1] - a[i], (k-a[i+1])+a[i]);
        }else if(i == n-1){
            ans = min(ans, min( (k-a[i])+a[i-1], a[i]-a[0] ));
        }else{
            ans = min(min( (k-a[i])+a[i-1], (k-a[i+1])+a[i] ),ans);
        }
        //cout << ans << endl;
    }
    cout << ans << endl;
    return 0;
}