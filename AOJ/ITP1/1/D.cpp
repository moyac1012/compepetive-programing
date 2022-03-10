#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int S;
    cin >> S;
    int h,m,s;
    h = S/3600;
    S -= h*3600;
    m = S/60;
    S -= m*60;
    s = S;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}