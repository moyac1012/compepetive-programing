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
    vector<vector<int>> f(n, vector<int>(10));
    vector<vector<int>> p(n, vector<int>(11));
    rep(i,n)rep(j,10) cin >> f[i][j];
    rep(i,n)rep(j,11) cin >> p[i][j];
    int ans = -1001001001;
    for(int bit = 1; bit < (1<<10); bit++){
        int cur = 0;
        for(int j = 0; j < n; j++){
            int cnt = 0;
            for(int i = 0; i < 10; i++){
                if(bit & (1<<i) && f[j][i] == 1){  
                    cnt++;
                }
            }
            cur += p[j][cnt];
        }
        ans = max(ans, cur);
    }
    cout << ans << endl;

    return 0;
}