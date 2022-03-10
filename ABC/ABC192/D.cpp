#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

ll honer(vector<ll> a, ll x, ll m){
    ll y = a[0];
    rep(i,a.size()-1){
        if(y > m/x) {
            y = m+1;
            return y;
        }
        y = y*x+a[i+1];
    }
    return y;
}

ll binary_search(ll bottom ,ll top, vector<ll> a, ll m){

    while(top - bottom > 1){
        ll mid = (top + bottom)/2;
        if(honer(a, mid, m) <= m) bottom = mid;
        else top = mid;
        //cout << "y: " << honer(a, mid, m) << endl;
        //cout << "bottom: " << bottom << " " << "top: " << top << endl;
        
    }
    return bottom;
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
    reverse(a.begin(), a.end());
    if(x.length() == 1){
        if(a[0] > m) cout << 0 << endl;
        else cout << 1 << endl;
    }else{
        //int test = honer(a, 5);
        //cout << test << endl;
        ll ans = 0;
        ll bottom = d+1, top = m+1;
        ans = binary_search(bottom, top, a, m);
        cout << ans - d << endl;
    }

    return 0;   
}