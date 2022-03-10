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
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = 0;
    int total = 0;
    rep(i,n){
        total += a[i];
        for (int j = i; j < n; j++){
            if(a[i] <= a[j+1]){
                total += a[i];
            }else{
                break;
            }
        }
        if(ans < total) ans = total;
        total = 0;
    }
    cout << ans << endl;
    return 0;
}