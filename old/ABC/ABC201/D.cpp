#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[2] = {1, 0};
const int dy[2] = {0, 1};

int h, w;
vector<string> maze;

int main(){
    cin >> h >> w;
    maze.resize(h);
    rep(i,h) cin >> maze[i];
    int n = h+w-2;
    int a = 0, t = 0;
    if(n%2 == 0){
        
    }

    return 0;
}