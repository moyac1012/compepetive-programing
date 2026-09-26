#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll a,b;
    ll n;
    cin >> n >> a >> b;
    if(a > b){
        cout << 0 << endl;
    }else if(a == b){
        cout << 1 << endl;
    }else{
        
    }

    return 0;
}