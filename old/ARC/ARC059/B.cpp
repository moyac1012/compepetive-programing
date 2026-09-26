#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = 1001001001;
    Rep(i,-100,101){
        int sum = 0;
        rep(j,n) sum += (a[j] - i)*(a[j] - i);
        ans = min(sum, ans);
    }
    cout << ans << endl;
    return 0;
}