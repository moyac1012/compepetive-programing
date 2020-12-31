#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{   
    int ans = 0;
    int t;
    rep(i,8){
        cin >> t;
        if(ans < t) ans = t;
    }
    cout << ans << endl;

    return 0;
}