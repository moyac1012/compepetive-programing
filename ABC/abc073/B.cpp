#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    rep(i,n) cin >> l[i] >> r[i];
    int ans = 0;
    rep(i,n){
        ans += r[i] - l[i] + 1;
    }
    cout << ans << endl;
    return 0;
}