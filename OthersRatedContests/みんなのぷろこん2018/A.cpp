#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    string s;
    cin >> s;
    string yah = "";
    rep(i,3){
        yah += s[i];
    }
    if(yah == "yah" && s[3] == s[4]){
        cout<< "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}