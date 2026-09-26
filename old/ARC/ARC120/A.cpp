#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll mx = a[0];
    ll sum = 0;
    vector<ll> r(n);
    r[0] = a[0];
    Rep(i,1,n){
        r[i] += r[i-1] + a[i];
    }

    for(ll i = 0; i < n; i++){
        mx = max(a[i], mx);
        ll cnt = mx*(i+1);
        sum += cnt + r[i];
        cout << sum << endl;
        sum -= cnt;
    }
    
    return 0;
}