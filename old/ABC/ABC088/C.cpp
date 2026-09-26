#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    vector<int> a(3),b(3),c(3);
    rep(i,3)cin >> a[i];
    rep(i,3)cin >> b[i];
    rep(i,3)cin >> c[i];

    rep(i,3){
        int mn = min(min(a[0], a[1]), a[2]);
        a[0] -= mn;
        a[1] -= mn;
        a[2] -= mn;
    }
    rep(i,3){
        int mn = min(min(b[0], b[1]), b[2]);
        b[0] -= mn;
        b[1] -= mn;
        b[2] -= mn;
    }
    rep(i,3){
        int mn = min(min(c[0], c[1]), c[2]);
        c[0] -= mn;
        c[1] -= mn;
        c[2] -= mn;
    }
    if(a == b && b == c) cout << "Yes" << endl;
    else cout<< "No" << endl;
    return 0;
}