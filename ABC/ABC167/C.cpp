#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> a(n,vector<int>(m));
    rep(i,n){
        cin >> c[i];
        rep(j,m) cin >> a[i][j];
    }
    vector<int> total(n);
    rep(i,n){
        rep(j,m){
            total[i] += a[j][i];
        }
        if(total[i] < x){
            cout << -1 << endl;
            return 0;
        }
    }
    for (int bit = 0; bit < (1<<n); bit++){
        for(int i = 0; i < n; i++){
            
        }
    }

    return 0;
}