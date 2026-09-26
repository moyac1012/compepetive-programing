#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll MOD = 1e9+7;
    int t;
    cin >> t;
    rep(k,t){
        ll n,a,b;
        cin >> n >> a >> b;
        ll cnta = (n-a+1)*(n-a+1) % MOD;
        ll cntb = (n-b+1)*(n-b+1) % MOD;
        ll all = cnta*cntb % MOD;
        ll cross = (a+b-1)*(a+b-1)*min(cnta, cntb) % MOD;
        ll small = min(a, b);
        ll u = (small+n-1)*(small-1)*4-(small-1)+(small-1) % MOD;
        cout << all - cross +u % MOD << endl;
    }
    return 0;
}