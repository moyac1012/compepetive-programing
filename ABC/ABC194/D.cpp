#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    double n; cin >> n;
    double ans = 0;
    for(int i = 1; i < n; i++){
        ans += n/(n-(double)i);
    }
    printf("%.10lf\n", ans);
    return 0;
}