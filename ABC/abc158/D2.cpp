#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll MOD = 10e9+7;
ll n,a,b;
ll pow(ll n){
    if(n == 1) return 2;
    if(n % 2 == 1) return 2*pow(n-1);
    ll t = pow(n/2) % MOD;
    return (t * t)%MOD;
}  
ll fanc(ll n){
    ll ans =  1;
    for (size_t i = 1; i <= n; i++)
    {
        ans = i % MOD * ans % MOD;
        ans = ans % MOD;
    }
    return ans % MOD;
}
int main()
{
    cin >> n >> a >> b;
    ll total = pow(n)-1;
    cout << fanc(n) << endl;
}