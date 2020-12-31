#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char> (n));
    rep(i,n) rep(j,n) cin >> s[j][n-1-i];
    rep(i,n){
        rep(j,n){
            cout << s[i][j];
        }
        cout << endl;
    }

    return 0;
}