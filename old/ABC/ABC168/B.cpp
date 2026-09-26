#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int size = s.length();
    if(size > k){
        rep(i,k){
            cout << s[i];
        }
        cout << "..." << endl;
    }else{
        cout << s << endl;
    }
}