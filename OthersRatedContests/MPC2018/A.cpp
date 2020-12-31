#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    string s;
    cin >> s;
    string mujin = "MUJIN";
    string ans = "";
    rep(i,5){
        ans += s[i];
    }
    if(ans == mujin) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}