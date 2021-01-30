#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    ll n,m;
    cin >> n >> m;
    vector<ll> a(m), b(m);
    rep(i,m) cin >> a[i] >> b[i];
    rep(i,m){
        a[i]--; 
        b[i]--;
    }
    ll k;
    cin >> k;
    vector<ll> c(k), d(k);
    rep(i,k) cin >> c[i] >> d[i];
    ll ans = 0, total = 0;
     for (ll bit = 0; bit < (1<<k); ++bit) {
        vector<ll> flag(k);
        vector<ll> sara(n);
        for (ll i = 0; i < k; ++i) {
            if (bit & (1<<i)) { 
                flag[i]++;
                cout << i << endl;
            }
        }
        for(ll i = 0; i < k; i++){
            if(flag[i] == 0){
                sara[a[i]]++;
            }else{
                sara[b[i]]++;
            }
        }
        for (ll i = 0; i < m; ++i){
            if(sara[a[i]] > 0 && sara[b[i]] > 0) total++;
        }
        if(ans < total) ans = total;
        total = 0;
     }
     cout << ans << endl;
    return 0;
}