#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    string a,b;
    cin >> a >> b;

    int c = 0,d = 0;
    rep(i,3){
        c += a[i] - '0';
        d += b[i] - '0';
    }
    cout << max(c, d) << endl;

    return 0;
}