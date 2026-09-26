#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
void output(int bit, int n){
    vector<int> a;
    for(int i = 0; i < n; i++){
        if(bit & (1<<i)){
            a.push_back(i);
        }
    }
    cout << a.size() << " ";
    rep(i,a.size()){
        cout << a[i] + 1 << " ";
    }
    cout << endl;
}

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    rep(i,n) a[i] %= 200;
    map<ll, ll> mp;
    if(n >= 8) n = 8;
    for(int bit = 1; bit < (1<<n); bit++){
        ll sum = 0;
        for(int i = 0; i < n;i++){
            if(bit & (1<<i)) sum += a[i];
        }
        sum %= 200;
        if(mp.count(sum)){
                cout << "Yes" << endl;
                output(mp[sum],n);
                output(bit,n);
                return 0;
        }
        mp[sum] = bit;
    }
    cout << "No" << endl;

    return 0;
}