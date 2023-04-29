#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll x = 0, y = 0;
    rep(i,n) x += a[i]*a[i];
    x *= n;
    rep(i,n) y += a[i];
    y *= y;
    cout << x - y << endl;
    return 0;
}