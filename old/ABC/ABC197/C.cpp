#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
ll ora(deque<ll> a){
    ll ans = a[0];
    for(ll i = 1; i < a.size(); i++){
        ans |= a[i];
    }
    return ans;
}

int main(){
    ll n;
    cin >> n;
    deque<ll> a(n);
    rep(i,n) cin >> a[i];
    ll ans = 1e18;
    for (ll bit = 0; bit < (1<<(n-1)); ++bit) {
        deque<deque<ll>> kukans;
        deque<ll> kukan;
        //cout << "bit" << endl;
        for (ll i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                //cout << i << endl;
                kukan.push_back(a[i]);
                kukans.push_back(kukan);
                kukan.clear();
            }else{
                kukan.push_back(a[i]);
            }
        }
        kukans.push_back(kukan);

        //cout<< "kukan" << endl;
        // rep(i,kukans.size()){
        //     rep(j,kukans[i].size()){
        //          cout << kukans[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        if(kukans.empty()) {
            ans = min(ans,ora(kukan));
            continue;
        }
        ll xorans = ora(kukans[0]);
        for(int i = 1; i < kukans.size(); i++){
            xorans ^= ora(kukans[i]);
        }
        ans = min(ans, xorans);
    }

    cout << ans << endl;

    return 0;
}