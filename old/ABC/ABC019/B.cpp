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
    string ans = "";
    int cnt = 1;
    rep(i,n){
        if(s[i] == s[i+1]){
            cnt++;
        }else{
            ans += s[i];
            ans += to_string(cnt);
            cnt = 1;
        }
    }
    cout << ans << endl;
    return 0;
}