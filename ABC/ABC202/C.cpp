#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) cin >> c[i];
    rep(i,n) {
        a[i]--;
        b[i]--;
        c[i]--;
    }
    vector<ll> cnt(n);
    rep(i,n) cnt[a[i]]++;
    ll ans = 0;
    rep(i,n){
        ans += cnt[b[c[i]]];
    }
    cout << ans << endl;
    return 0;
}