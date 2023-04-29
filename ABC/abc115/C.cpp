#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n,k; cin >> n >> k;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];
    sort(h.begin(), h.end(), greater<int>());
    ll ans = 1e10;
    rep(i,n-k+1){
        ans = min(ans, h[i] - h[i+k-1]);
    }
    cout << ans<< endl;
    return 0;
}