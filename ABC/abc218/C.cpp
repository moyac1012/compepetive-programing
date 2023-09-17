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
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }

vector<vector<char>> rotate(vector<vector<char>> s){
    int l = s[0].size();
    int m = s.size();
    vector<vector<char>> ns(l, vector<char>(m));
    rep(i,m){
        rep(j,l){
            ns[l-j-1][i] = s[i][j];
        }
    }
    return ns;
}

vector<vector<char>> cutout(vector<vector<char>> s, int n){
    int xmin = 100000;
    int ymin = 100000;
    int xmax = 0;
    int ymax = 0;

    rep(i,n){
        rep(j,n){
            if(s[i][j] == '#'){
                xmin = min(xmin, j);
                xmax = max(xmax, j);
                ymin = min(ymin, i);
                ymax = max(ymax, i);
            }
        }
    }
    int l = ymax - ymin + 1;
    int m = xmax - xmin + 1;
    vector<vector<char>> ns(l, vector<char>(m));
    for(int i = ymin; i <= ymax; i++){
        for(int j = xmin; j <= xmax; j++){
            ns[i-ymin][j-xmin] = s[i][j];
        }
    }
    return ns;
}

bool is_same_vector(vector<vector<char>> s, vector<vector<char>> t){
    if(s.size() != t.size() || s[0].size() != t[0].size()) return false;
    rep(i, s.size()){
        rep(j, s[i].size()){
            if(s[i][j] != t[i][j]) return false;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;
    vector<vector<char>> s(n, vector<char>(n)), t(n, vector<char>(n));
    rep(i,n)rep(j,n) cin >> s[i][j];
    rep(i,n)rep(j,n) cin >> t[i][j];

    s = cutout(s, n);
    t = cutout(t, n);

    rep(i,4){
        if(is_same_vector(s,t)){
            cout << "Yes" << endl;
            return 0;
        }
        s = rotate(s);
    }
    cout << "No" << endl;

    return 0;
}