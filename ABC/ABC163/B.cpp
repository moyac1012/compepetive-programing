#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i,m) cin >> a.at(i);
    int total = 0;
    rep(i,m) total += a.at(i);
    if(total > n) cout << -1 << endl;
    else cout << n - total << endl;
}