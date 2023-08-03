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
string s;
vector<vector<ll>> cnt(6);

void update(){
    rep(i, s.length()){
        if(s[i]== '(') cnt[0][i]++;
        if(s[i]== ')') cnt[1][i]++;
        if(s[i]=='?') cnt[2][i]++;
        if(i-1 >= 0) cnt[0][i] += cnt[0][i-1];
        if(i-1 >= 0) cnt[1][i] += cnt[1][i-1];
        if(i-1 >= 0) cnt[2][i] += cnt[2][i-1];
        
    }
    for(int i = s.length(); i >= 0; i--){
        if(s[i] == '(') cnt[3][i]++;
        if(s[i] == ')') cnt[4][i]++;
        if(s[i] == '?') cnt[5][i]++;
        if(i+1 < s.length()) cnt[3][i] += cnt[3][i+1];
        if(i+1 < s.length()) cnt[4][i] += cnt[4][i+1];
        if(i+1 < s.length()) cnt[5][i] += cnt[5][i+1];
    }
}

int main(){
    cin >> s;
    cnt.assign(4, vector<ll>(s.length()));
    ll n = s.length();
    ll q = 0;
    rep(i,n) if(s[i] == '?') q++;
    if(q%2 == 1) {
        cout << 0 << endl;
        return 0;
    }
    update();

    for(int i = n; i >= 0; i--){

    }

    rep(i,6) print_vec(cnt[i]);


    return 0;
}