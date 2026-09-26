#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
ll gcd(ll a, ll b){
    if(a < b){
        swap(a, b);
    }
    while(a%b != 0){
        ll r = a%b;
        a = b;
        b = r;
    }
    return b;
}

ll lcm(ll a, ll b){
    return (a/gcd(a, b)) * b;
}

int main(){
    ll n;
    cin >> n;
    vector<ll> t(n);
    rep(i,n) cin >> t[i];
    if(n == 1){
        cout << t[0] << endl;
        return 0;
    }
    ll ans = lcm(t[0], t[1]);
    rep(i,n){
        ans = lcm(t[i], ans);
    }
    cout << ans << endl;
    return 0;
}