#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    vector<ll> s(n-k+1,1);
    for (ll i = 0; i < k; i++)
    {
        s[0] *= a[i];
    }
    for (ll i = 1; i < n-k+1; i++)
    {
        s[i] = (s[i-1]-a[i-1])+a[i+k-1];
    }
    // rep(i,n-k+1){
    //     cout << s[i] << endl;
    // }
    rep(i,n-k){
        if(s[i] < s[i+1]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}