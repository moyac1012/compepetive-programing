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
    ll q;
    cin >> q;
    vector<ll> b(q);
    vector<ll> c(q);
    rep(i,q){
        cin >> b[i] >> c[i];
    }
    ll total = 0;
    vector<ll> cnt(100001);
    rep(i,n){
        total += a[i];
        cnt[a[i]]++;
    }
    rep(i,q){
        total += cnt[b[i]]*(c[i]-b[i]);
        cnt[c[i]] += cnt[b[i]];
        cnt[b[i]] = 0;
        cout << total << endl;

    }

    return 0;
}