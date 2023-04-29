#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int a,b;
    cin >> a >> b;
    if(2*a + 100 - b <= 0) cout << 0 << endl;
    else cout << 2*a + 100 -b << endl;
    return 0;
}