#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
ll digit(ll n){
    int cnt  = 0;
    while(n != 0){
        cnt++;
        n /= 10;
    }
    return cnt;
}
int main(){
    ll n;
    cin >> n;
    ll ans = digit(n);
    for(ll i = 1; i * i <= n; i++){
        if(n%i == 0) {
            ll a = i;
            ll b = n/i;
            ans = min(ans, digit(max(a,b)));
        }
    }
    cout << ans << endl;

    return 0;
}