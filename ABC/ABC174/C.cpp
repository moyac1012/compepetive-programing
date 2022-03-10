#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll k;
    cin >> k;
    ll ans = 1;
    ll na = 7;
    if(k == 1 || k == 7){
        cout << 1 << endl;
        return 0;
    }
    rep(i,10000000){
        if(na == 0){
            cout << ans << endl;
            return 0;
        }
        na *= 10;
        na += 7;
        na = na%k;
        ans++;
    }
    cout << -1 << endl;
    return 0;
}