#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int a,b;
    string s;
    cin >> a >> b;
    cin >> s;
    int n = s.length();
    if(a <= n && n <= b) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}