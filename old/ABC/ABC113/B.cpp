#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n; cin >> n;
    ll t,a; cin >> t >> a;
    t *= 1000; a *= 1000;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];
    ll ans = 1e18;
    ll temp = 1e18;
    rep(i,n){
        if(temp > abs(a - (t - (h[i]*6)))){
            temp = abs(a - (t - (h[i]*6)));
            ans = i + 1;
        }
    }
    cout << ans << endl;

    return 0;
}