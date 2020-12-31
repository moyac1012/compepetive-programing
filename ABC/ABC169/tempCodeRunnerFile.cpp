#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll A;
    double B;
    cin >> A >> B;   
    int B_tmp = B*100 + 0.5;
    ll ans = B_tmp * A / 100;
    cout << ans << endl;
}