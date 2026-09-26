#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
bool seen[11][11] = {};
int h = 10, w = 10;
void dfs(int sh, int sw, vector<string> maze){
    seen[sh][sw] = true;
    rep(i,4){
        int nh = sh + dx[i], nw = sw + dy[i];
        if(nw < 0 || nh < 0 || nw >= w || nh >= h) continue;
        if(seen[nh][nw] || maze[nh][nw] == 'x') continue;
        dfs(nh, nw, maze);
    }
}

void printmaze(vector<string> maze){
    cout << endl;
    cout << "maze:" << endl;
    rep(i,maze.size()){
        rep(j, maze[0].size()){
            cout << maze[i][j];
        }
        cout << endl;
    }
}

void initseen(){
    rep(i,11){
        rep(j,11){
            seen[i][j] = false;
        }
    }
}

int main(){
    vector<string> maze(h);
    rep(i,h) cin >> maze[i];
    int cnt = 0;
    rep(i,h)rep(j,w){
        vector<string> newmaze = maze;
        newmaze[i][j] = 'o';
        //printmaze(newmaze);
        rep(x,h)rep(y,w){
            if(seen[x][y] || newmaze[x][y] == 'x') continue;
            dfs(x, y, newmaze);
            cnt++;
        }
        if(cnt == 1){
            cout << "YES" << endl;
            return 0;
        }
        initseen();
        cnt= 0;
    }
    cout << "NO" << endl;
    return 0;

}