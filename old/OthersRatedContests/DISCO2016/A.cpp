#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double m = b/a;
    printf("%.10f\n", m*c);
    return 0;
}