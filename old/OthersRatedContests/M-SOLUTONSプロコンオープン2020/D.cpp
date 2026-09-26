#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    ll ans = 1000;
    int mi = a[0];
    ll k = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i+1] > mi){
            k = ans/mi;
            //cout << k << " " <<  mi<< endl;
            ans -= k*mi;
            //cout << ans << endl;
            ans += a[i+1]*k;
            //cout << ans << endl;
            mi = a[i+1];
        }else{
            mi = a[i+1];
        }
    }
    cout << ans << endl;
    
    return 0;
}