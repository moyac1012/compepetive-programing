#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    if(a < c && a < d && b < c && b < d || a > c && a > d && b > c && b > d){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}