#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> a(n),b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    vector<ll> ra(n+1), rb(m+1);
    ra[0] = 0, rb[0] = 0;
    Rep(i,1,n+1) ra[i] = ra[i-1] + a[i-1];
    Rep(i,1,m+1) rb[i] = rb[i-1] + b[i-1];

    ll j = m;
    ll ans = 0;
    rep(i,n+1){
        while(0 <= j && ra[i] + rb[j] > k) j--;
        if(0 <= j) ans = max(ans, i+j);
    }
    cout << ans << endl;
    return 0;
}