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
    int a1,a2;
    int flag = 0;
    rep(i,n){
        if(s[i] == s[i+1]){
            if(flag == 0){
                a1 = i;
                flag = 1;
            }else if(flag == 1){
                a2 = i;
                flag = 2;
            }
        }
    }
    if(a1 == 4 && a2 == 11) cout << "Do" << endl;
    else if(a1 == 2 && a2 == 9) cout << "Re" << endl;
    else if(a1 == 0 && a2 == 7) cout << "Mi" << endl;
    else if(a1 == 6 && a2 == 11) cout << "Fa" << endl;
    else if(a1 == 4 && a2 == 9) cout << "So" << endl;
    else if(a1 == 2 && a2 == 7) cout << "La" << endl;
    else if(a1 == 0 && a2 == 5) cout << "Si" << endl;
    return 0;
}