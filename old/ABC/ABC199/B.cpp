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
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    int maxa = 0, minb = 10000;
    rep(i,n){
        maxa = max(maxa, a[i]);
        minb = min(minb, b[i]);
    }
    cout << max(minb - maxa + 1, 0) << endl;
    return 0;
}