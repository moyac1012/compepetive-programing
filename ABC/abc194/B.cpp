#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    int ans = a[0]+b[0];
    rep(i,n){
        rep(j,n){
            if(i == j) ans = min(ans, a[i]+b[j]);
            else ans = min(ans, max(a[i], b[j]));
        }
    }
    cout << ans << endl;
    return 0;
}