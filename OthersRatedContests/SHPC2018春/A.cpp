#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    string x,y;
    cin >> x >> y;
    if(x[0] == 'S' && y[0] == 'H') cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}