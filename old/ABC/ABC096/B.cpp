#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll a,b,c,k;
    cin >> a >> b >> c >> k;
    ll mx = max(a, max(b,c));
    ll mn = min(a, min(b,c));
    ll ans = mx * pow(2,k) + a + b + c - mx;
    cout << ans <<endl;
    return 0;
}