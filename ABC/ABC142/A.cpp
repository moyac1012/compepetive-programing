#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    double a = n;
    if(n%2 == 0) cout << 0.500 << endl;
    else cout << (floor(a/2)+1)/n << endl;
    return 0;
}