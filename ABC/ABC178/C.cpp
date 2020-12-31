#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll n;
    cin >> n;
    ll m =1e9+7;

    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    ll ans = n*(n-1)%m;
    rep(i,n-2){
        ans *= 10%m;
        ans %= m;
    }
    cout << ans%m << endl;
    return 0;
}