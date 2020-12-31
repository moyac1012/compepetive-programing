#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll x = a * c;
    ll y = a * d;
    ll z = b * c;
    ll u = b * d;
    ll ans = max(max(max(x, y), z),u);
    cout << ans << endl;

    return 0;
}