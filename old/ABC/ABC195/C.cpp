#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    if(n >= 999) ans += n - 999;
    if(n >= 999999) ans += n - 999999;
    if(n >= 999999999) ans += n - 999999999;
    if(n >= 999999999999) ans += n - 999999999999;
    if(n >= 999999999999999) ans += n - 999999999999999;
    cout << ans << endl;
    return 0;

}