#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

ll trib(ll n){
    vector<ll> a(n);
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for (size_t i = 3; i < n; i++)
    {
        a[i] = a[i-1]%10007 + a[i-2]%10007 + a[i-3]%10007;
    }

    return a[n-1];
    
}

int main()
{
    ll n;
    cin >> n;
    cout << trib(n)%10007 << endl;
    return 0;
}