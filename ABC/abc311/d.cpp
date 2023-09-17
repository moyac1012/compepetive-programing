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
vector<vector<bool>> seen;
void dfs(const vector<vector<char>> &s, int x, int y){
    seen[x][y] = true;
    bool preseen = true;
    rep(i,4){
        int nx = x, ny = y;
        while(s[nx+dx[i]][ny+dy[i]] != '#'){
            nx += dx[i];
            ny += dy[i];
            preseen = seen[nx][ny];
            seen[nx][ny] = true;
        }
        if(!preseen) dfs(s, nx, ny);
    }
}

int main(){
    int n,m; cin >> n >> m;
    vector<vector<char>> s(n, vector<char>(m));
    rep(i,n)rep(j,m) cin >> s[i][j];
    seen.assign(n, vector<bool>(m, false));
    dfs(s, 1, 1);
    int cnt = 0;
    rep(i,n)rep(j,m) if(seen[i][j]) cnt++;
    // rep(i,n){
    //     rep(j,m) {
    //         if(seen[i][j]) {
    //             cout << 1;
    //         }else{
    //             cout << 0;
    //         }
    //     }
    //     cout << endl;
    // }
    cout<< cnt << endl;
    return 0;
}