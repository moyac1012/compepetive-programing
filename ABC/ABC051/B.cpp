#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int k,s;
    cin >> k >> s;
    int ans = 0;
    rep(x,k+1){
        rep(y,k+1){
            int z = s - y - x;
            if(z <= k && z >= 0) {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}