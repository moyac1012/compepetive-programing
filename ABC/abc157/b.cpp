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
    vector<vector<int>> a(3, vector<int>(3));
    vector<vector<int>> bingo(3, vector<int>(3));
    rep(i,3)rep(j,3) cin >> a[i][j];
    int n; cin >> n;

    rep(i,n){
        int b; cin >> b;
        rep(j,3){
            rep(k,3){
                if(a[j][k]==b) bingo[j][k] = 1;
            }
        }
    }
    int tot = 0;
    rep(i,3){
        tot = 0;
        rep(j,3){
            tot += bingo[i][j];
        }
        if(tot == 3){
            cout << "Yes" << endl;
            return 0;
        }
    }

    rep(i,3){
        tot = 0;
        rep(j,3){
            tot += bingo[j][i];
        }
        if(tot == 3){
            cout << "Yes" << endl;
            return 0;
        }
    }

    if(bingo[0][0] + bingo[1][1] + bingo[2][2] == 3|| bingo[0][2] + bingo[1][1] + bingo[2][0] == 3){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}
