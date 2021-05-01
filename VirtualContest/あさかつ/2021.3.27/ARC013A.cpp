#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m,l,p,q,r;
    cin >> n >> m >> l >> p >> q >> r;
    cout << max(max( max( max( (max( ( n/p ) * ( m/q ) * ( l/r ), ( n/q ) * ( m/r ) * ( l/p ) ) ), ( n/r ) * ( m/q ) * ( l/p ) ), ( n/p ) * ( m/r ) * ( l/q ) ), ( n/q ) * ( m/p ) * ( l/r ) ), ( n/r ) * ( m/p ) * ( l/q ) ) << endl;
    return 0;   
}