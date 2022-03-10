#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const ll MOD = 998244353;

ll g(string s){
    vector<ll> cnt(3);
    rep(i,s.length()){
        if(s[i] == '.') cnt[0]++;
        if(s[i] == 'R') cnt[1]++;
        if(s[i] == 'B') cnt[2]++;
    }
    if(cnt[0] >= 1 && cnt[1] == 0 && cnt[2] == 0) return 2;
    else if(cnt[0] >= 0 && cnt[1] >= 1 && cnt[2] == 0) return 1;
    else if(cnt[0] >= 0 && cnt[1] == 0 && cnt[2] >= 1) return 1;
    else return 0;
}

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> maze(h);
    rep(i,h) cin >> maze[i];
    vector<string> naname(h+w-1);
    rep(i,h)rep(j,w) naname[i+j] += maze[i][j];
    ll ans = 1;
    ll cnt = 0;
    rep(i,naname.size()){
        ll k = g(naname[i]);
        // cout << naname[i] << endl;
        // cout << k << endl;
        if(k != 0){
            ans *= k; 
            ans %= MOD;
            //cout << ans << endl;
        } else {
            cout << 0 << endl;
            return 0;
        }
    }

    cout << ans << endl;
    // rep(i,naname.size()){
    //     rep(j,naname[i].length()){
    //         cout << naname[i][j];
    //     }
    //     cout << endl;
    // }

    return 0;
}