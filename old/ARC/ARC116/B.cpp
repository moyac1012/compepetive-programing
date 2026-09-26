#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i,n) for(ll i = 0; i < (ll)(n); i++)
using Graph = vector<vector<ll>>;

int main(){     
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> na(n);
    ll MOD = 998244353;
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    if(a.size() == 1){
        cout << (a[0]*a[0])%MOD << endl;
        return 0;
    }
    rep(i,n) na[i] = a[i];
    vector<ll> ruiseki(n-1);
    ruiseki[0] = na[n-1];
    int cnt = 1;
    for(int i = n-2; i >= 0; i--) {
        ruiseki[cnt] = (ruiseki[cnt-1] + a[i]);
        ruiseki[cnt] %= MOD;
        cnt++;
    }
    //rep(i,ruiseki.size()) cout << "ruiseki : " <<  ruiseki[i] << " ";
    cout << endl;
    ll x = 0;
    ll ruisekicnt = 0;
    ll ans = 0;
    for(int i = n-2; i >= 0; i--){
        x = (ruiseki[ruisekicnt] + x);
        x %= MOD;
        ans += (a[i]*x)%MOD;
        ans %= MOD;
        //cout << "x: " << x << " ";
        //cout << "a: " << a[i] << endl;
        //cout << "ans: " << ans << endl;
        ruisekicnt++;
    }
    rep(i,n){
        ans += (a[i]*a[i])%MOD;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}