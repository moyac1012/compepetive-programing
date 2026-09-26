#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int h,w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i,h) rep(j,w) cin >> a[i][j];
    int minv = 101;
    rep(i,h) rep(j,w){
        minv = min(a[i][j], minv);
    }
    int ans = 0;
    rep(i,h)rep(j,w){
        ans += a[i][j] - minv;
    }
    cout << ans << endl;
    return 0;   
}