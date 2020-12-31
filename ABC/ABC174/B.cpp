#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll n,d;
    cin >> n >> d;
    vector<ll> x(n);
    vector<ll> y(n);
    rep(i,n) cin >> x[i] >> y[i];
    int ans = 0;
    rep(i,n){
        if(d*d >= x[i]*x[i]+y[i]*y[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}