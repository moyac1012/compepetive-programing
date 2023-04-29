#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll ans = 0;
    rep(i,n){
        if(a[i] < 0){
            int k = i + 1;
            rep(j,k){
                int cnt = 0;
                cnt += a[j]*(k-j);
                if(ans < cnt) ans = cnt;
            }
        }
    }
    int total = 0;
    rep(i,n){
        total += a[i];
    }
    if(total > ans ) ans = total;
    cout << ans << endl;
    return 0;
}