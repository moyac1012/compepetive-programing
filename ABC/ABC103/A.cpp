#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    vector<int> a(3);
    rep(i,3) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;
    rep(i,2){
        ans += a[i+1] - a[i];
    }
    cout << ans<< endl;
    return 0;
}