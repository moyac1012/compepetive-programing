#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    if(n*a >= b) cout << b << endl;
    else cout << n*a << endl;
    return 0;
}