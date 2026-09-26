#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> v(n), p(n);
    rep(i,n) cin >> v[i] >> p[i];
    x *= 100;
    double total = 0;
    int cnt = 0;
    rep(i,n){
        total += v[i]*p[i];
        cnt++;
        if(total > x){
            cout << cnt << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}