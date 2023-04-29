#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll n;
    cin >> n;
    vector<ll> ans;
    for(ll i = 1; i*i <= n; i++){
        if(n%i == 0) {
            ans.push_back(i);
            if(i * i != n) ans.push_back(n/i);
        }
    }
    sort(ans.begin(), ans.end());
    rep(i, ans.size()){
        cout << ans[i] <<endl;
    }
    return 0;
}