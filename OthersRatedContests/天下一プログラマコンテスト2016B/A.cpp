#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
int f(int n){
    return floor((n*n+4)/8);
}
int main()
{
    int n = 20;
    int ans;
    ans = f(n);
    ans = f(ans);
    ans = f(ans);
    cout << ans << endl;
    return 0;
}