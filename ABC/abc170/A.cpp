#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    if(a == 0) cout << 1 << endl;
    else if(b == 0) cout << 2 << endl;
    else if(c == 0) cout << 3 << endl;
    else if(d == 0) cout << 4 << endl;
    else if(e == 0) cout << 5 << endl;
}