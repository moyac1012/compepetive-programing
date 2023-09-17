#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m; cin >> n >> m;
    vector<int> l(m), r(m);
    rep(i,m) cin >> l[i] >> r[i];
    rep(i,m) {l[i]--; r[i]--;}
    int left = l[0], right = r[0];
    rep(i,m){
        left = max(l[i], left);
        right = min(r[i], right);
    }    
    
    cout << max(right - left + 1, 0) << endl;
}