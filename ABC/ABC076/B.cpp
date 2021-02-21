#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n,k;
    cin >> n >> k;
    int ans = 1;
    rep(i,n){
        if(ans < k) ans *= 2;
        else ans += k;
    }
    cout << ans << endl;
    return 0;
}