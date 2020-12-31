#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
bool isAllequal(vector<ll> a, int n){
    rep(i,n-1){
        if(a[i] != a[i+1]) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    do{
        sort(a.begin(), a.end());
        rep(i,n){
            if(a[i]%a[0] == 0) a[i] = a[0];
            else a[i] = a[i]%a[0];
        }
        // rep(i,n) {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
    }while(!isAllequal(a, n));
    cout << a[0] << endl;
    return 0;   
}