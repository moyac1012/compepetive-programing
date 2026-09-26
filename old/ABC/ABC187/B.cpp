#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];
    int cnt = 0;
    rep(i,n){
        rep(j,n){
            if(i == j) continue;
            int a = abs(y[i]-y[j])/abs(x[i]-x[j]);
            if(abs(y[i]-y[j]) == abs(x[i]-x[j]) || a == 0) cnt++;
            
        }
    }
    cout << cnt/2 << endl;
    return 0;
}