#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,k,m;
    cin >> n >> k >> m;
    vector<int> a(n-1);
    rep(i,n-1) cin >> a[i];
    int total = 0;
    rep(i,n-1) total += a[i];
    int ans = n*m-total;
    if(k < ans) cout << -1 << endl;
    else if(ans <= 0) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}