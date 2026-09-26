#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll MOD =1e9 + 7;
    ll n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = a[0] + 1;
    for(int i = 1; i < n; i++){
        ans *= a[i] - a[i-1] + 1;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}