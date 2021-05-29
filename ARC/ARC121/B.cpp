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
    vector<pair<ll, char>> a(2*n);
    rep(i,2*n) cin >> a[i].first >> a[i].second;
    vector<ll> r,g,b;
    rep(i,2*n) {
        if( a[i].second == 'R') r.push_back(a[i].first);
        if( a[i].second == 'G') g.push_back(a[i].first);
        if( a[i].second == 'B') b.push_back(a[i].first);
    }
    if(r.size()%2 == 0 && g.size()%2 == 0 && b.size()%2 == 0){
        cout << 0 << endl;
        return 0;
    }
    sort(r.begin(), r.end());
    sort(g.begin(), g.end());
    sort(b.begin(), b.end());

    if(g.size()%2 == 0) r.swap(g);
    if(b.size()%2 == 0) r.swap(b);
    ll ans1 = 1e18, ans2 = 1e18, ans3 = 1e18;
    for(auto x : g){
        auto it = lower_bound(b.begin(), b.end(), x);
        if(it != b.begin()) ans1 = min(ans1, x - *prev(it));
        if(it != b.end()) ans1 = min(ans1, *it - x); 
    }

    for(auto x : r){
        auto it = lower_bound(b.begin(), b.end(), x);
        if(it != b.begin()) ans2 = min(ans2, x - *prev(it));
        if(it != b.end()) ans2 = min(ans2, *it - x);
    }

    for(auto x : r){
        auto it = lower_bound(g.begin(), g.end(), x);
        if(it != g.begin()) ans3 = min(ans3, x - *prev(it));
        if(it != g.end()) ans3 = min(ans3, *it - x);
    }

    cout << min(ans1, ans2+ans3) << endl;
}