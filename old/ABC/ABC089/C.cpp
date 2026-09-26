#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    vector<ll> cnt(5);
    int n; cin >> n;
    rep(i,n){
        string s;
        cin >> s;
        if(s[0] == 'M') cnt[0]++;
        if(s[0] == 'A') cnt[1]++;
        if(s[0] == 'R') cnt[2]++;
        if(s[0] == 'C') cnt[3]++;
        if(s[0] == 'H') cnt[4]++;
    }
    ll ans = 0;
    rep(i,5)Rep(j,i+1,5)Rep(k,j+1,5) ans += cnt[i]*cnt[j]*cnt[k];
    cout << ans << endl;
    return 0;
}