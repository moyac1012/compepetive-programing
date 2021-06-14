#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int x,y;
    cin >> x >> y;
    if(x > y) swap(x,y);
    if(x == y) cout << x << endl;
    else if(x == 0 && y == 1) cout << 2 << endl;
    else if(x == 1 && y == 2) cout << 0 << endl;
    else if(x == 0 && y == 2) cout << 1 << endl;
    return 0;
}