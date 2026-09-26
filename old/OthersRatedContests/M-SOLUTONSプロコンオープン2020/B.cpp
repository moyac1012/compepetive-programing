#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int a,b,c;
    int k;
    cin >> a >> b >> c >> k;
    rep(i,k){
        if(a >= b){
            b = 2*b;
            continue;
        }else if(b >= c){
            c = c*2;
            continue;
        }
    }
    if(a < b && b < c) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}