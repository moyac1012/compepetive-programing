#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n,m,t;
    cin >> n >> m >> t;
    vector<int> a(m),b(m);
    rep(i,m) cin >> a[i] >> b[i];
    m -= a[0];
    rep(i,m){
        if(m <= 0){
            
        }
    }
    return 0;
}