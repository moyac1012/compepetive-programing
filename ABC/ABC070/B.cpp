#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b < c) cout << 0 << endl;
    else if(a < c && d < b) cout << d - c << endl;
    else if(c < a && b < d) cout << b - a << endl;
    else if(c < b && a < d) cout << b - c << endl;
    else cout << d - a << endl;
    return 0;
}