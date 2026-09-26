#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
using P = pair<int, int>;
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    deque<P> q;
    const int INF = 1001001001;
    vector<vector<int>> dist(h, vector<int>(w, INF));
    vector<vector<bool>> visited(h, vector<bool>(w));
    dist[0][0] = 0;
    q.emplace_back(0,0);
    while(q.size()){
        int i = q.front().first;
        int j = q.front().second;
        q.pop_front();
        if(visited[i][j]) continue;
        visited[i][j] = true;
        int d = dist[i][j];
        rep(v,4){
            int ni = i+dx[v], nj = j+dy[v];
            if(ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
            if(s[ni][nj] == '#') continue;
            if(dist[ni][nj] <= d) continue;
            dist[ni][nj] = d;
            q.emplace_front(ni,nj);
        }
        for(int ni = i-2; ni <= i+2; ni++){
            for(int nj = j-2; nj <= j+2; nj++){
                if(abs(ni-i) + abs(nj-j) > 3) continue;
                if(ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
                if(dist[ni][nj] <= d+1) continue;
                dist[ni][nj] = d+1;
                q.emplace_back(ni,nj);
            }
        }
    }
    cout << dist[h-1][w-1] << endl;

    return 0;
}