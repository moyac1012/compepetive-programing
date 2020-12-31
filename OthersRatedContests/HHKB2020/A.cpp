#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    char s,t;
    cin >> s >> t;
    if(s == 'Y') {
        t = toupper(t);
        cout << t << endl;
    }else cout << t << endl;
    return 0;
}