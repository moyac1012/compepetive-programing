#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

bool islagerx(vector<int> cnt, int x){
    rep(i,cnt.size()){
        if(cnt[i] < x) return false;
    }
    return true;
}

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> a(n, vector<int>(m));
    rep(i,n){
        cin >> c[i];
        rep(j,m){
            cin >> a[i][j];
        }
    }
    vector<int> cnt(m);
    int ans = 1e9;
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                S.push_back(i);
            }
        }

        for (int i = 0; i < (int)S.size(); ++i) {
            rep(j,m){
                cnt[j] += a[S[i]][j];
            }
        }
        if(islagerx(cnt, x)){
                int cost = 0;
                rep(i,S.size()){
                    cost += c[S[i]];
                }
                ans = min(ans, cost);
        }
        cnt.assign(m, 0);
    }

    if(ans == int(1e9)) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}