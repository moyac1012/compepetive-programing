#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i,n) cin >> p[i];

    sort(p.begin(),p.end());
    int total = 0;
    rep(i,k) total += p[i];
    cout << total << endl;
}