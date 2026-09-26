#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> p(n);
    rep(i,n) cin >> x[i] >> y[i] >> p[i];
    vector<int> ans(n+1);
    vector<int> pm(n);
    rep(i,n) pm[i] = p[i];

    

    return 0;
}