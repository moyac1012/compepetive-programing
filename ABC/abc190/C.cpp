#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i,m) cin >> a[i] >> b[i];
    int k;
    cin >> k;
    vector<int> c(k), d(k);
    rep(i,k) cin >> c[i] >> d[i];
    rep(i,m) a[i]--, b[i]--;
    rep(i,k) c[i]--, d[i]--;
    
    int ans = 0;
    for(int bit = 0; bit < (1<<k); bit++){
        vector<int> dish(n);
        for(int i = 0; i < k;i++){
            if(bit & (1<<i)) dish[c[i]]++;
            else dish[d[i]]++;
        }
        int cnt = 0;
        rep(i,m){
            if(dish[a[i]] >= 1 && dish[b[i]] >= 1) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;   
}