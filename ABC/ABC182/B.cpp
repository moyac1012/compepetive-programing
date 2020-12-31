#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            if (N/i != i) res.push_back(N/i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    vector<ll> div;
    rep(i,n){
        vector<ll> divi = enum_divisors(a[i]);
        rep(j,divi.size()){
            div.push_back(divi[j]);
        }
    }
    sort(div.begin(), div.end());
    cout << endl;
    int cnt = 1;
    int ans = 1;
    int max = 1;
    rep(i,div.size()){
        if(div[i] == div[i+1] && div[i] != 1){
            cnt++;
        }else{
            if(max <= cnt ) {
                ans = div[i];
                max = cnt;
            }
            cnt = 1;
        }
    }
    if(max <= cnt ){
        ans = div[div.size() - 1];
        max = cnt;
    }
    cout << ans << endl;
    return 0;
}