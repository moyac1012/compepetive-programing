#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)

int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> x(n);
    vector<ll> xr(n);
    rep(i,n) cin >> x[i];
    xr = x;
    reverse(xr.begin(), xr.end());
    ll total = 0;
    ll ans = 1e10;
    rep(i,n-k+1){
        total = abs(x[i]) + abs(x[i+k-1] - x[i]);
        if(ans > total) ans = total;
        total = abs(xr[i]) + abs(xr[i+k-1] - xr[i]);
        if(ans > total) ans = total;
    }

    cout << ans << endl;
    return 0;
}