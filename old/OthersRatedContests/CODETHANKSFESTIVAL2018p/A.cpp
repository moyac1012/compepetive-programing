#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int t,a,b,c,d;
    cin >> t >> a >> b >> c >> d;
    int ans = 0;
    if(t >= c) {
        ans+=d;
        t-=c;
        if(t >= a){
            ans+=b;
        }
        cout << ans << endl;
        return 0;
    }else if(t >= a){
        ans += b;
    }
    cout << ans << endl;
    return 0;
}