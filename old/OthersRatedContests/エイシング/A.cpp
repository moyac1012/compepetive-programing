#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int l,r,d;
    cin >> l >> r >> d;
    int ans = 0;
    for (size_t i = l; i <= r; i++)
    {
        if(i%d == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}