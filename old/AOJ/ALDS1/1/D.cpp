#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<int> r(n);
    rep(i,n) cin >> r[i];
    int minv = r[0];
    int maxv = -1000000000;
    for (size_t i = 1; i < n; i++)
    {
        maxv = max(maxv, r[i]-minv);
        minv = min(minv,r[i]);
    }
    cout << maxv << endl;
    
    return 0;
}