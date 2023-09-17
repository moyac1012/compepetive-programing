#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    string s,t;
    cin >> s >> t;
    int k = 0;
    int ans = 0;
    rep(i, s.length()-t.length()+1){
        string sub = s.substr(i, t.length());
        rep(j, t.length()){
            if(t[j] == sub[j]) k++;
        }
        ans = max(k, ans);
        k = 0;
    }
    cout << t.length() - ans << endl;
    return 0;
}