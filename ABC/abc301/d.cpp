#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
using P = pair<int, int>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const char alp[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }

int main(){
    int height, width, t;
    cin >> height >> width >> t;
    int okashicnt = 0;

    /* 盤面 */
    vector<string> field(height);
    vector<vector<int>> fieldcnt(height, vector<int>(width));
    for (int h = 0; h < height; ++h) {
        cin >> field[h];
        rep(i,field[h].length()) if(field[h][i] == 'o') okashicnt++;
    }
    /* スタート地点とゴール地点 */
    int sx, sy, gx, gy;
    for (int h = 0; h < height; ++h) {
        for (int w = 0; w < width; ++w) {
            if (field[h][w] == 'S') {
                sx = h;
                sy = w;
            }
            if (field[h][w] == 'G') {
                gx = h;
                gy = w;
            }
        }
    }

    vector<vector<int> > dist(height, vector<int>(width, -1)); 
    dist[sx][sy] = 0;

    // 探索中に各マスはどのマスから来たのかを表す配列 (最短経路長を知るだけなら、これは不要)
    vector<vector<int> > prev_x(height, vector<int>(width, -1));
    vector<vector<int> > prev_y(height, vector<int>(width, -1));

    // 「一度見た頂点」のうち「まだ訪れていない頂点」を表すキュー
    queue<pair<int, int> > que; 
    que.push(make_pair(sx, sy)); // スタートを push


    ////////////////////////////////////////
    /* 幅優先探索を実施 */
    ////////////////////////////////////////    

    /* キューが空になるまで */
    while (!que.empty()) {
        pair<int, int> current_pos = que.front(); // キューの先頭を見る (C++ ではこれをしても pop しない)
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop(); // キューから pop を忘れずに

        // 隣接頂点を探索
        for (int direction = 0; direction < 4; ++direction) {
            int next_x = x + dx[direction];
            int next_y = y + dy[direction];
            if (next_x < 0 || next_x >= height || next_y < 0 || next_y >= width) continue; // 場外アウトならダメ
            if (field[next_x][next_y] == '#') continue; // 壁はダメ

            // まだ見ていない頂点なら push
            if (dist[next_x][next_y] == -1) {
                que.push(make_pair(next_x, next_y));
                dist[next_x][next_y] = dist[x][y] + 1; // (next_x, next_y) の距離も更新
                prev_x[next_x][next_y] = x;  // どの頂点から情報が伝播して来たか、縦方向の座標をメモ
                prev_y[next_x][next_y] = y;  // どの頂点から情報が伝播して来たか、横方向の座標をメモ
            }
        }
    }


    ////////////////////////////////////////
    /* 結果出力 */
    ////////////////////////////////////////    

    int x = gx, y = gy;
    while (x != -1 && y != -1) {
        field[x][y] = 'o'; // 通過したことを示す

        // 前の頂点へ行く
        int px = prev_x[x][y];
        int py = prev_y[x][y];
        x = px, y = py;
    }
    for (int h = 0; h < height; ++h) {
        for (int w = 0; w < width; ++w) {
            cout  << field[h][w];
        }
        cout << endl;
    }
}