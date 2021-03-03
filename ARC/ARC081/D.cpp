#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    ll MOD = 1000000007;
    ll ans = 0;
    char p;

    if(s1[0] == s2[0]) {
        ans += 3;
        p = 'x';
    }else{
        ans += 6;
        p = 'y';
    }
    int i = 0;
    if(p == 'x') i = 1;
    else i = 2;
    for(i ; i < s1.length(); i++){
        if(p == 'x'){
            if(s1[i] == s2[i]){ 
                ans *= 2;
                p = 'x';
            }else{
                ans *= 2;
                p = 'y';
                i++;
            }
        }else{
            if(s1[i] == s2[i]){ 
                ans *= 1;
                p = 'x';
            }else{
                ans *= 3;
                p = 'y';
                i++;
            }
        }
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}