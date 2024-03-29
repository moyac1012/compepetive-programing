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
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }
bool sameall(vector<int> x){
    bool f = true;
    rep(i,3) {
        if(x[i] != x[i+1]) f = false;
    }
    return f;
}
bool series(vector<int> x){
    bool f = true;
    rep(i,3){
        if((x[i]+1)%10 != (x[i+1])%10) f = false;
    }
    return f;
}
int main(){
    string s;
    cin >> s;
    vector<int> x(4);
    rep(i,4) x[i] = (int)s[i] - 48;
    bool weak = false;
    if(sameall(x) || series(x)){
        cout << "Weak" << endl;
    }else{
        cout << "Strong" << endl;
    }

    return 0;
}