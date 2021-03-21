#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b,w;
    cin >> a >> b >> w;
    w *= 1000;
    const int INF = 1010101010;
    int l = INF, r = -INF;
    for(int n = 1; n <= w; n++){
        if( a*n <= w &&  w <= b*n){
            l = min(l, n);
            r = max(r, n);
        }
    }
    if(l == INF) cout << "UNSATISFIABLE" << endl;
    else cout << l  << " " << r << endl;
    return 0;
}