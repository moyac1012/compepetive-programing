#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int h,w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    rep(i,h) rep(j, w) cin >> s[i][j];
    int ans = 0;
    rep(i, h){
        rep(j, w-1){
            if(s[i][j] == '.'  && s[i][j+1] == '.') ans++;
        }
    }
    rep(i, w){
        rep(j, h-1){
            if(s[j][i]== '.' && s[j+1][i] == '.') ans++;
        }
    }
    cout << ans << endl;
    return 0;
}