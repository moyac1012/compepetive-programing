#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    rep(i,n) a[i] %= 200;
    sort(a.begin(), a.end());
    ll cnt = 0, ans = 0;
    rep(i,n-1) {
        if(a[i] == a[i+1]) cnt++;
        else{
            cnt++;
            ans += cnt*(cnt-1)/2;
            cnt = 0;
        }
    }
    cnt++;
    ans += cnt*(cnt-1)/2;
    cout << ans << endl;
    return 0;
}