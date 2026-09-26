#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    string s;
    cin >> s;
    string ans = "";
    rep(i,s.length()){
        if(i%2 == 0){
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}