#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,x,t;
    cin >> n >> x  >> t;
    int ans = n/x*t;
    if(n%x != 0) ans += t;
    cout << ans << endl;
    return 0;
}