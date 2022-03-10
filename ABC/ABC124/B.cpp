#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    int mx = 0;
    int ans = 0;
    rep(i,n){   
        int h; cin >> h;
        if(mx <= h) ans++;
        mx = max(mx, h);
    }
    cout << ans << endl;
    return 0;
}