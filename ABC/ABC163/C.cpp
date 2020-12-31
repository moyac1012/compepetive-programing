#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<int> a(n-1);
    rep(i,n-1) cin >> a.at(i);
    vector<int> ans(n);
    rep(i,n-1){
        ans.at(a.at(i)-1) += 1;
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << ans.at(i) << endl;
    }
}   