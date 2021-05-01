#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const int M = 1000005;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> cnt(M);
    for(int x : a){
        if(cnt[x] != 0){
            cnt[x]++;
            continue;
        }
        for(int i = 0; i < M; i += x){
            cnt[i]++;
        }
    }
    int ans = 0;
    for(int x : a){
        if(cnt[x] < 2) ans++;
    }
    //rep(i,25) cout << cnt[i] << " ";
    cout << endl;
    cout << ans << endl;
    return 0;
}