#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
bool is_integer(double x){
    return floor(x) == x;
}
int main()
{
    int n;
    cin >> n;
    vector<double> a(n);
    rep(i,n){
        cin >> a[i];
    } 
    int cnt = 0;
    rep(i,n){
        if(is_integer(a[i])) cnt++;
    }
    cout << cnt << endl;
    vector<double> t(n);
    rep(i,n){
        t[i] = a[i] - (int)a[i];
        a[i] = (int)a[i];
    }
    
    int ans = 0;
    ans += cnt*(cnt-1)/2;
    rep(i,n){
        for (int j = i; j < n; j++)
        {
            if(i == j) continue;
            if(is_integer(t[i]*t[j]+a[i]*t[j]+a[j]*t[i])) ans++;
        }
        
    }
    cout << ans << endl;

    return 0;
}