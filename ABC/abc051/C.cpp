#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int sx,sy,tx,ty;
    cin >> sx >> sy >> tx >> ty;
    string ans = "";
    rep(i,tx-sx) ans += "R";
    rep(i,ty-sy) ans += "U";
    rep(i,tx-sx) ans += "L";
    rep(i,ty-sy) ans += "D";

    ans += "L";
    rep(i,ty-sy+1) ans += "U";
    rep(i,tx-sx+1) ans += "R";
    ans += "D";

    ans += "R";
    rep(i,ty-sy+1) ans += "D";
    rep(i,tx-sx+1) ans += "L";
    ans += "U";
    
    cout << ans << endl;
    return 0;
}