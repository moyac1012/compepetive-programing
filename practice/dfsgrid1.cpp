#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
int h,w;
vector<string> maze;

bool seen[510][510] = {};
void dfs(int sh, int sw){
    seen[sh][sw] = 1;
    rep(i,4){
        int nh = sh + dx[i], nw = sw + dy[i];
        if(nh < 0 || nw < 0 || nh >= h || nw >= w) continue;
        if(maze[nh][nw] == '#') continue;
        if(seen[nh][nw] == 1) continue;

        dfs(nh, nw);
    }
}

int main(){
    cin >> h >> w;
    maze.resize(h);
    rep(i,h) cin >> maze[i];
    int sh, sw, gh, gw;
    rep(i,h)rep(j,w){
        if(maze[i][j] == 's') sh = i, sw = j;
        if(maze[i][j] == 'g') gh = i, gw = j;
    }
    dfs(sh, sw);
    if(seen[gh][gw] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}