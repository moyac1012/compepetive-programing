#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    vector<string> maze(h);
    rep(i,h){
        cin >> maze[i];
    }
    x--;y--;
    int cnt = 0;
    for(int i = x; i >= 0; i--){
        if(maze[i][y] == '#') break;
        else cnt++;
    }
    for(int i = x; i < h; i++){
        if(maze[i][y] == '#') break;
        else cnt++;
    }
    for(int i = y; i >= 0; i--){
        if(maze[x][i] == '#') break;
        else cnt++;
    }
    for(int i = y; i < w; i++){
        if(maze[x][i] == '#') break;
        else cnt++;
    }

    cout << cnt -3 << endl;
    return 0;
}