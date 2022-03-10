#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll n;
    cin >> n;
    ll a, b;
    rep(i,n){
        cin >> a >> b;
        cout << a%b << endl;
    }
    return 0;   
}