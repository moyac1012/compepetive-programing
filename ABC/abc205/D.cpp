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
    int q; cin >> q;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    vector<ll> b(n);
    b = a;
    rep(i,n){
        b[i] -= i;
    }
    // rep(i,n){
    //     cout << b[i] << ' ';
    // }
    // cout << endl;
    rep(qi,q){
        ll k; cin >> k;
        auto p = upper_bound(b.begin(), b.end(), k);
        ll windex = distance(b.begin(), p);
        cout << windex + k << endl;
    }
    return 0;
}