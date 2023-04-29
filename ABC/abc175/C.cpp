#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    long long x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    if(x/d >= k){
        cout << x - k * d << endl;
        return 0;
    }else{
        ll s = x/d;
        if((k - s)%2 == 0) cout << x%d << endl;
        else cout << abs(x%d-d) << endl;
        return 0;
    }
}