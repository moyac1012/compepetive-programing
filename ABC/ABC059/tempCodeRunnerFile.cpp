#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    string a,b;
    cin >> a >> b;
    int na = a.length();
    int nb = b.length();
    if(na > nb){
        cout << "GREATER" << endl;
    }else if(na < nb){
        cout << "LESS" << endl;
    }else{
        if(a > b) cout << "GREATER" << endl;
        else if(b < a) cout << "LESS" << endl;
        else cout << "EQUAL" << endl;
    }
    
    return 0;
}