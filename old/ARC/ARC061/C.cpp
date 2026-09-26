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
    vector<int> numbers(n);
    rep(i,n) numbers[i] = s[i] - '0';
    for(int bit = 0; bit < (1<<n); bit++){
        for(int i = 0; i < n; i ++){
            if(bit & (1<<i)){
                //cout << i << endl;
                
            }
        }
        //cout << endl;
    }
    return 0;
}