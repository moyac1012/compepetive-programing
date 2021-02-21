#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i,m) cin >> a[i] >> b[i];
    int k;
    cin >> k;
    vector<int> c(k), d(k);
    rep(i,k) cin >> c[i] >> d[i];
    int ans = 0, total = 0;
     for (int bit = 0; bit < (1<<k); ++bit) {
        vector<int> flag(k);
        vector<int> sara(n);
        for (int i = 0; i < k; ++i) {
            if (bit & (1<<i)) { 
                flag[i]++;
                cout << i << "  ";
            }
        }
        cout << endl;
        for(int i = 0; i < k; i++){
            if(flag[i] == 0){
                sara[a[i]-1]++;
            }else{
                sara[b[i]-1]++;
            }
        }
        // rep(i,n){
        //     cout << flag[i] << " ";
        // }
        // cout << endl;
        for (int i = 0; i < m; ++i){
            if(sara[a[i]-1] > 0 && sara[b[i]-1] > 0) total++;
        }
        if(ans < total) ans = total;
        total = 0;
     }
     cout << ans << endl;
    return 0;
}