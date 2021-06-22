#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
int h, w;
vector<string> maze;
vector<vector<int>> seen;

void dfs(int sh, int sw){
    seen[sh][sw] = 0;

    for(int i = 0;i < 4; i++){
        int nh = sh + dx[i];
        int nw = sw + dy[i];

        if(nh < 0 || nw < 0 || nh >= h || nw >= w) continue;
        if(maze[nh][nw] == '#') continue;
        if(seen[nh][nw] == 1) continue;

        dfs(nh, nw);
    }
}

int main(){
    cin >> h >> w;
    int sh, sw, gh, gw;
    cin >> sh >> sw >> gh >> gw;
    maze.resize(h);
    rep(i,h) cin >> maze[i];
    seen.assign(1001, vector<int>(1001, -1));

    return 0;
}