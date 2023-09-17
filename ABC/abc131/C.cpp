#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
ll gcd(ll a,ll b){
    if(a < b){
        ll t = b;
        b = a;
        a = t;
    }
    while(a%b != 0){
        ll r = a%b;
        a = b;
        b = r;
    }
    return b;
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a, b);
}

int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    a--;

    ll b_cnt = b - (b/c) - (b/d) + (b/lcm(c, d));
    ll a_cnt = a - (a/c) - (a/d) + (a/lcm(c, d));
    cout << b_cnt - a_cnt << endl;
}