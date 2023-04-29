#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<ll> x(n);
    rep(i,n) cin >> x[i];
    double b = 0;
    ll a = 0, c = abs(x[0]);
    rep(i,n){
        a += abs(x[i]);
        b += abs(x[i])*abs(x[i]);
    }
    rep(i,n) {
        c = max(c, abs(x[i]));
    }
    cout << a << endl;
    printf("%.20lf\n",sqrt(b));
    cout << c << endl;
    return 0;
}