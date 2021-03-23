#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int X = x2 - x1, Y = y2 - y1;
    int x3 = x2 - Y, y3 = y2 + X;
    int x4 = x1 - Y, y4 = y1 + X;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}