#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    vector<int> alpha(26);
    string s;
    cin >> s;
    rep(i, s.length()){
        alpha[(int)s[i]-97]++;
    }
    rep(i,26){
        if(alpha[i] > 1){
            cout << "no" << endl;
            return 0; 
        }
    }
    cout << "yes" << endl;
    return 0;
}