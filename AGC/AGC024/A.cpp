#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    ll a,b,c,k;
    cin >> a >> b >> c >> k;
    if(k%2 == 0) cout << a - b << endl;
    else cout << b - a << endl;
    return 0;
}