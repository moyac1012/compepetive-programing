#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    double a,b;
    cin >> a >> b;
    printf("%.20lf\n", ((a-b)/a) * 100);
    return 0;   
}