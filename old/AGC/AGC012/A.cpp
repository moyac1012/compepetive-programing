#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n; cin >> n;
    vector<ll> a(3*n);
    rep(i,n*3) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    //rep(i,3*n) cout << a[i] << " ";
    //cout << endl;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        //cout << a[2*i+1] << endl;
        ans += a[2*i+1];
    }
    cout << ans << endl;
    return 0;
}