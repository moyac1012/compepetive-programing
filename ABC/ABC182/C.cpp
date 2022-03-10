#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    ll n;
    cin >> n;
    ll k = GetDigit(n);
    vector<ll> kurai(k);
    ll p = n;
    rep(i,k){
        if(i != 0) p /= 10;
        kurai[i] = p%10;
    }
    ll flag1 = 0, flag2 = 0;
    rep(i,k){
        kurai[i] %= 3;
        if(kurai[i] == 1) flag1++;
        if(kurai[i] == 2) flag2++;
    }
    ll sum = 0;
    rep(i,k){
        sum += kurai[i];
    }
    if(sum%3 == 0){
        cout << 0 << endl;
        return 0;
    }else if(sum%3 == 1){
        if(flag1 > 0){
            if(k <= 1){
                cout << -1 << endl;
                return 0;
            }
            cout << 1 << endl;
            return 0;
        }else if(flag2 >= 2){
            if(k <= 2){
                cout << -1 << endl;
                return 0;
            }
            cout << 2 << endl;
            return 0;
        }else{
            cout << -1 << endl;
            return 0;
        }
    }else{
        if(flag2 > 0){
            if(k <= 1){
                cout << -1 << endl;
                return 0;
            }
            cout << 1 << endl;
            return 0;
        }else if(flag1 >= 2){
            if(k <= 2){
                cout << -1 << endl;
                return 0;
            }
            cout << 2 << endl;
            return 0;
        }else{
            cout << -1 << endl;
            return 0;
        }

    }
    return 0;
}