#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    vector<ll> a(4);
    rep(i,4) cin >> a[i];
    sort(a.begin(), a.end());
    if(a[0] + a[3] == a[1] + a[2] || a[0] + a[1] + a[2] == a[3]) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}