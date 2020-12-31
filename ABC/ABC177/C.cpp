#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n){
        cin >> a[i];
        a[i] = a[i];
    }
    ll ans = 0;
    ll total = 0;
    rep(i,n) {
        total += a[i];
    }
    total -= a[0];
    for (int i = 0; i < n-1; i++)
    {
        ans += a[i]*total%1000000007;
        total -= a[i+1];
    }
    cout << ans%1000000007 << endl;
    return 0;
}