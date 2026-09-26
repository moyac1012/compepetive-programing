#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    vector<int> a(n), p(n), x(n);
    rep(i,n) cin >> a[i] >> p[i] >> x[i];
    int t = 0;
    int ans = 1e9+1;
    rep(i,n){
        if(i != 0) t += a[i] - a[i-1];
        else t = a[i];
        x[i] = max(0, x[i]-t);
        if(x[i] != 0) ans = min(ans, p[i]);
    }
    if(ans != 1e9+1) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}