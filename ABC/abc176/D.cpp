#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int h, w, m;
    cin >> h >> w >> m;
    vector<vector<int>> hw(m,vector<int>(2));
    rep(i,m) cin >> hw[i][0] >> hw[i][1];
    vector<int> numh(300000);
    vector<int> numw(300000);
    rep(i,m) {
        numh[hw[i][0]-1]++;
        numw[hw[i][1]-1]++;
    }
    int maxh = numh[0], maxw = numw[0], hi = 0, wi = 0;
    rep(i,300000){
        if(maxh < numh[i]){
            maxh = numh[i];
            hi = i;
        }
        if(maxw < numw[i]){
            maxw = numw[i];
            wi = i;
        }
    }
    if(hi == wi) cout << maxh + maxw -1 << endl;
    else cout << maxh + maxw << endl;
    return 0;
}