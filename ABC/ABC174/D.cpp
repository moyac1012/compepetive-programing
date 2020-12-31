#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans;
    int r = 0,w = 0;
    rep(i,n){
        if(s[i] == 'W') w++;
        else r++;
    }
    if(w == 0 || r == 0){
        cout << 0 << endl;
        return 0;
    }
    int ansr = 0;
    rep(i,r){
        if(s[i] == 'W') ansr++;
    }
    rep(i,n-1){
        if(s[i] == 'W' && s[i+1] == 'R'){
            s[i+1] = 'W';
            ans++;
        }
    }

    cout << min(ans,ansr) << endl;
    return 0;
}