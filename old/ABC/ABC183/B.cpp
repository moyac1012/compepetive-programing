#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    printf("%.10lf\n", ((gx - sx) * sy ) / (sy + gy) + sx);
    return 0;
}