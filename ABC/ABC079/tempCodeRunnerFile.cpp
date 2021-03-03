#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

ll func(ll n){
    vector<ll> l(n);
    l[0] = 2;
    l[1] = 1;
    if(n == 1) return l[0];
    else if(n == 2) return l[1];
    rep(i,n-1){
        l[i+2] = l[i+1]+l[i];
    }
    return l[n];
}

int main()
{
    ll n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}