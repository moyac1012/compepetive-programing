#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m,x,y; cin >> n >> m >> x >> y;
    int mxx = x, mny = y;
    rep(i,n){
        int xi;
        cin >> xi;
        mxx = max(mxx, xi);
    }
    rep(i,m){
        int yi;
        cin >> yi;
        mny = min(mny, yi);
    }
    if(mxx < mny) cout << "No War" << endl;
    else cout << "War" << endl;


    return 0;
}