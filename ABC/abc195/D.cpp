#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m,q;
    cin >> n >> m >> q;
    vector<pair<int,int>> vw(n);
    rep(i,n) cin >> vw[i].second >> vw[i].first;
    vector<pair<int,int>> x(m);
    rep(i,m) cin >> x[i].first;
    rep(i,m) x[i].second = i;
    sort(x.begin(), x.end());
    sort(vw.begin(), vw.end(), greater<pair<int,int>>());
    rep(p,q){
        int l,r;    
        cin >> l >> r;
        l--; r--;
        int ans = 0;
        vector<int> f(50);
        rep(i,m){
            rep(j,n){
                if(vw[j].second <= x[i].first && f[j] == 0
                &&(x[i].second < l || r < x[i].second) ){
                    ans += vw[j].first;
                    f[j]++;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}