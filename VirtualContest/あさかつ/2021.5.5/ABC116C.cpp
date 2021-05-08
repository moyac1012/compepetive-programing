#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    vector<int> c(n);
    rep(i,n) cin >> h[i];
    int ans = 0;
    rep(i, n){
        int d = h[i] - c[i];
        ans += d;
        for(int j = i; j < n; j++){
            d = min(d, h[j] - c[j]);
            c[j] += d;
        }
    }
    cout << ans << endl;
    
    return 0;
}