#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = unsigned long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

ll honer(vector<ll> a, ll x){
    ll y = a[a.size()-1];

    rep(i,a.size()-1){
        y = y*x+a[a.size()-2-i];
    }
    return y;
}

int main()
{
    string x;
    ll m;
    cin >> x >> m;
    vector<ll> a(x.length());
    ll d = 0;
    rep(i,x.length()){
        a[x.size()-1-i] = x[i] - '0';
        if(d < x[i]-'0') d = x[i] - '0';
    }
    d++;
    if(x.length() == 1){
        if(m  < a[0]) cout << 0 << endl;
        else cout << m - a[0] << endl;
    }else{
        //int test = honer(a, 5);
        //cout << test << endl;
        ll ans = 0;
        while(1){
            if(honer(a, d) > m) break;
            ans++;
            d++;
        }
        cout << ans << endl;
    }
    return 0;   
}