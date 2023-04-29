#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{   
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    ll cnt = 0;
    ll ans = 0;
    rep(i,n){
        if(a[i] == a[i+1]){
            cnt++;
        }else{
            cnt++;
            if(cnt%2 == 1) ans++;
            cnt = 0;
        }
    }
    cout << ans << endl;
    return 0;
}