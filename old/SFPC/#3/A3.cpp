#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll a,k;
    cin >> a >> k;
    int ans = 0;
    if(k == 0){
        cout << 2000000000000-a << endl;
        return 0;
    }
    while(2000000000000 > a){
        a = a + 1 + k*a;
        ans++;
    }
    cout << ans << endl;
    return 0;
}