#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll l; cin >> l;
    ll c[201][201];
    c[0][0] = 1;
    rep(i,200){
        rep(j,i+1){
            c[i+1][j] += c[i][j];
            c[i+1][j+1] += c[i][j];
        }
    }
    cout << c[l-1][11] << endl;
    return 0;
}