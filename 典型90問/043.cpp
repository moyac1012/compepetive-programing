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
int dist[1005][1005][4];
struct state{
    int x,y,dir;
};
int main(){
    int h,w; cin >> h >> w;
    int sh,sw,gh,gw;
    int inf = 1001001001;
    cin >> sh >> sw >> gh >> gw;
    sh--; sw--; gh--; gw--;
    vector<string> maze(h);
    rep(i,h) cin >> maze[i];
    rep(i,h)rep(j,w)rep(k,4) dist[i][j][k] = inf;
    deque<state> q;
    rep(i,4){
        dist[sh][sw][i] = 0;
        q.push_back({sh,sw,i});
    }
    while(!q.empty()){
        state u = q.front();
        q.pop_front();
        rep(i,4){
            int tx = u.x + dx[i], ty = u.y + dy[i], cost = dist[u.x][u.y][u.dir] + (u.dir != i ? 1 : 0);
			if (0 > tx || tx >= h || 0 > ty || ty >= w || maze[tx][ty] == '#' || dist[tx][ty][i] <= cost) continue;
            dist[tx][ty][i] = cost;
            if (u.dir != i) q.push_back({ tx, ty, i });
            else q.push_front({ tx, ty, i });
        }
    }
    int ans = inf;
    rep(i,4) ans = min(ans, dist[gh][gw][i]);
    cout << ans << endl;
    return 0;
}