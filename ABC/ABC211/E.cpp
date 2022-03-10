#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, -1, 0, 1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }
int n,k;
int ans = 0;

void dfs(vector<string> s){
    int cnt = 0;
    rep(i,n)rep(j,n) if(s[i][j] == '@') cnt++;
    if(cnt == k){
        ans++;
        return;
    }

    rep(i,n)rep(j,n){
        if(s[i][j] != '.') continue;
        if(cnt != 0){
            bool f = false;
            rep(v,4){
                int nh = i + dy[v], nw = j + dx[v];
                if(nh < 0 || nw < 0 || nh >= n || nw >= n) continue;
                if(s[nh][nw] == '@') f = true;
            }
            if(!f) continue; 
        }
        s[i][j] = '@';
        dfs(s);
        s[i][j] = '#';
        dfs(s);
        return;
    }
}

int main(){
    cin >> n >> k;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    dfs(s);
    cout << ans << endl;
    return 0;
}