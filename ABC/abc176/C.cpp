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
    rep(i,n) cin >> a[i];
    ll ans = 0;
    rep(i,n-1){
        if(a[i] > a[i+1]) {
            ans += a[i] - a[i+1];
            a[i+1] = a[i];
        }
    }
    cout << ans << endl;
    return 0;  
}