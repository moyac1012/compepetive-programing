#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    int q; cin >> q;
    rep(qi,q){
        ll b; cin >> b;
        ll ans = 1e9+1;
        auto p = lower_bound(a.begin(), a.end(), b);
        ans = min(ans, abs(b-*p));
        if(p != a.begin()) ans = min(ans, abs(b-*prev(p)));
        if(p != a.end()-1) ans = min(ans, abs(b-*(p++)));
        cout << ans << endl;
    }

    return 0;
}