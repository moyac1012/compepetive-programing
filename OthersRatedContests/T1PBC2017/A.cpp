#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int ans = 0;
    rep(i,n){
        if(s[i] == '1') ans++;
    }
    cout << ans << endl;
    return 0;
}