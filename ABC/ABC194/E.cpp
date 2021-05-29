#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m; cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> c;
    vector<int> cnt(10000000);
    int ans;
    copy(a.begin(), a.begin() + m, back_inserter(c));
    rep(i,c.size()) cnt[c[i]]++;
    rep(i,cnt.size()){
        if(cnt[i] == 0) {
            ans = i;
            break;
        }
    }
    if(ans == 0){
        cout << ans << endl;
        return 0;
    }
    for(int i = 1; i < n-m+1; i++){
        cnt[a[i-1]]--; cnt[a[i+m-1]]++;
        if(cnt[a[i-1]] == 0 && ans > a[i-1]) ans = a[i-1];
    }
    cout << ans << endl;
    return 0;
}