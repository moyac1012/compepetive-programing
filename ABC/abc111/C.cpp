#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i,n) cin >> v[i];
    bool flag = true;
    ll a = v[0];
    rep(i,n){
        if(v[i] != a) flag = false;
    }
    if(flag) {
        cout << n/2 << endl;
        return 0;
    }
    vector<int> cnt1(100005),cnt2(100005);
    vector<int> v1,v2;
    auto it1 = v1.begin();
    auto it2 = v2.begin();
    for (int i = 0; i < n; i ++)
    {
        if(i%2 == 0) {
            it1 = v1.insert(it1,v[i]);
            it1++;
        }else{
            it2 = v2.insert(it2,v[i]);
            it2++;
        }
    }
    rep(i,n/2){
        cnt1[v1[i]]++;
        cnt2[v2[i]]++;
    }
    ll maxcnt1 = 0;
    ll smaxcnt1 = 0;
    rep(i,100005){
        if(maxcnt1 < cnt1[i]) maxcnt1 = cnt1[i];
        if(maxcnt2 < cnt2[i]) maxcnt2 = cnt2[i];
    }
    ll ans = n-maxcnt1-maxcnt2;
    cout << ans << endl;
    return 0;
}