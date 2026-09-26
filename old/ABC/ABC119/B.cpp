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
    double ans = 0;
    rep(i,n){
        double x;
        string u;
        cin >> x >> u;
        if(u == "JPY") ans += x;
        else ans += 380000*x;
    }
    printf("%.10lf\n", ans);
    return 0;
}