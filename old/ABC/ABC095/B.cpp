#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> m(n);
    rep(i,n) cin >> m[i];
    sort(m.begin(), m.end());
    int cnt = 0;
    rep(i,n) {
        cnt++;
        x -= m[i];
    }
    cnt += (int)(x/m[0]);
    cout << cnt << endl;
    return 0;
}