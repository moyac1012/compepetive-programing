#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int s,l,r;
    cin >> s >> l >> r;
    if(l <= s && s <= r) cout << s << endl;
    else if(s >= r) cout << r << endl;
    else cout << l << endl; 
    return 0;
}