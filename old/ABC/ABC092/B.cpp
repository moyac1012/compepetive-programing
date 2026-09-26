#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,d,x; cin >> n >> d >> x;
    int ans = 0;
    rep(i,n) {
        int a; cin >> a;
        ans += (d-1)/a+1;
    }
    cout << ans + x << endl;
    return 0;
}