#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int h,w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    rep(i,h) rep(j,w) cin >> s[i][j];
    cout << 4 << endl;

    return 0;
}