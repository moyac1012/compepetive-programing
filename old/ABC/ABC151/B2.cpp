#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,k,m;
    cin >> n >> k >> m;
    vector<int> a(n-1);
    rep(i,n-1) cin >> a[i];
    int total = 0;
    rep(i,n-1) total += a[i];
    int x = n*m-total;
    if(k<x) cout << -1 << endl;
    else if(x < 0) cout << 0 << endl;
    else cout << x << endl;
    return 0;
}