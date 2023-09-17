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
    if(s[0] == 'A' && s[2] == 'C' && s[3] != 'C'){
        rep(i,s.length()){
            if(i == 2 || i == 0) continue;
            if(isupper(s[i])){
                cout << "WA" << endl;
                return 0;
            }
        }
        cout << "AC" << endl;
        return 0;
    }else if(s[0] == 'A' && s[3] == 'C' && s[2] != 'C'){
        rep(i,s.length()){
            if(i == 3 || i == 0) continue;
            if(isupper(s[i])){
                cout << "WA" << endl;
                return 0;
            }
        }
        cout << "AC" << endl;
        return 0;
    }
    cout << "WA" << endl;
    return 0;
}