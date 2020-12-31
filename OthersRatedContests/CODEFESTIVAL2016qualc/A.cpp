#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    string s;
    cin >> s;
    bool flag1 = false, flag2 = false;

    rep(i,s.length()){
        if(flag1 == false){
            if(s[i] == 'C'){
                flag1 = true;
            }
        }
        if(flag1 == true && flag2 == false){
            if(s[i] == 'F'){
                flag2 = true;
            }
        }
    }
    if(flag2 == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}