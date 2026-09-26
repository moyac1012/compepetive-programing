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
    vector<int> numh(300001);
    vector<int> numw(300001);
    rep(i,m) {
        numh[hw[i][0]]++;
        numw[hw[i][1]]++;
    }
    int ans = numh[1], hi = 1, wi = 1;
    rep(i,300001){
        if(ans <= numh[i]){
            ans = numh[i];
            hi = i;
        }
    }
    cout<< ans << endl;
    rep(i,300001){
        if(ans < ans + numw[i]) ans = ans + numw[i];
    }
    rep(i,5){
        cout <<  numw[i] << endl;
    }
    cout << ans << endl;
    return 0;
}