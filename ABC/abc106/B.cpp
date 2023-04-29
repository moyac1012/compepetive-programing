#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    int ans = 0;
    rep(x,n+1){
        int cnt = 0;
        Rep(i,1,x+1){
            if(x%i == 0) cnt++;
        }
        if(cnt == 8 && x%2 == 1) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}