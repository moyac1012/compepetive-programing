#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> t(n);
    rep(i,n) cin >> t[i];
    for(int i = 2; i < n; i++){
        ll total = t[i] + t[i-1] + t[i-2];
        if(total < k){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}