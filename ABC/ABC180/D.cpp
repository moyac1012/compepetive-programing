#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll cnt = 0;
    
    while(x*(a-1) <= b){
        x *= a;
        cnt++;
        if(x >= y){
            cout << cnt-1 << endl;
            return 0; 
        }
    }
    if((y-x)/b > 0){
        cnt += (y-x)/b;
        if((y-x)%b == 0) cnt--;
    }

    cout << cnt << endl;
    return 0;
}