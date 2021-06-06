#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,k;
    cin >> n >> k;
    ll ans = 0;
    Rep(i,1,n+1){
        Rep(j,1,k+1){
            ans += i*100+j;
        }
    }
    cout << ans << endl;
    return 0;
}