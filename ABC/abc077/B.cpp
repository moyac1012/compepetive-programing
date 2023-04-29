#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;
ll inf = 1e5;
int main()
{
    int n;
    cin >> n;
    vector<ll> sq(inf);
    rep(i,inf){
        sq[i] = i*i;
    }
    int ansnum = sqrt(n);
    int ans = sq[ansnum];
    cout << ans << endl;
    return 0;
}