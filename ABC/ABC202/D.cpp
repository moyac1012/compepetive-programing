#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
ll c[61][61];

int main(){
    ll a,b,k;
    cin >> a >> b >> k;
    c[0][0] = 1;
    rep(i,60) {
        rep(j,i+1){
            c[i+1][j] += c[i][j];
            c[i+1][j+1] += c[i][j];
        }
    }
    string ans;
    while(a + b > 0){
        ll x = 0;
        if(a != 0) x = c[a+b-1][a-1];
        if(k <= x){
            ans += 'a';
            a--;
        }else{
            ans += 'b';
            b--;
            k -= x;
        }
    }
    cout << ans << endl;
    return 0;
}