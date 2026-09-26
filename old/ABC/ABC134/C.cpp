#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){ 
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> ad;
    ad = a;
    sort(ad.begin(), ad.end(), greater<int>());
    int m = ad[0], sm = ad[1];
    rep(i,n){
        if(a[i] == m) cout << sm << endl;
        else cout << m << endl;
    }
    return 0;
}