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
    ll k;
    cin >> n >> k;
    ll ans = 0;
    vector<pair<ll, ll>> a(n);
    rep(i,n) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    vector<pair<ll,ll>> b;
    rep(i,n-1) {
        if(a[i].first != a[i+1].first) b.push_back(a[i]);
        else{
            a[i+1].second += a[i].second;
        }
    }
    b.push_back(a[n-1]);

    // rep(i,b.size()){
    //     cout << b[i].first <<" " <<  b[i].second << endl;
    // }
    // cout << endl;

    rep(i,b.size()){
        if(i != 0 && k < b[i].first- b[i-1].first){
            cout << ans + k << endl;
            return 0;
        }else if(i == 0 && k < b[i].first){
            cout << ans + k << endl;
            return 0;
        }
        if(i != 0) ans += b[i].first - b[i-1].first;
        else ans += b[i].first;

        if(i != 0) k -= b[i].first - b[i-1].first;
        else k -= b[i].first;

        k += b[i].second;
        //cout << ans << " " << k << endl;
    }
    cout << ans + k << endl;
    return 0;
}