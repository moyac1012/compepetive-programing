#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int x;
    cin >> x;
    if(x == 1) cout << 0 << endl;
    else cout << 1 << endl;
    return 0;
}