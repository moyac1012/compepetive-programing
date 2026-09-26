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
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }

int main(){
    int t; cin >> t;
    vector<vector<vector<int>>> anss;

    rep(ti,t){
        int h,w; cin >> h >> w;
        vector<vector<int>> ans(h, vector<int>(w));
        rep(i,h){
            rep(j,w){
                if(i == 0){
                    if(j != 0){
                        if(ans[i][j-1] == 0) ans[i][j] = 1;
                    }else{
                        ans[i][j] = 1;
                    }
                }else if(i == h-1){
                    if(j == 0){
                        if(ans[i-1][j] == 0) ans[i][j] = 1;
                    }else if(j == 1){
                        if(ans[i-1][j-1] == 0 && ans[i][j-1] == 0) ans[i][j] = 1;
                    }else if(j == w-2){
                        if(ans[i-1][j+1] == 0 && ans[i][j-1] == 0) ans[i][j] = 1;
                    }else{
                        if(ans[i][j-1] == 0 && ans[i-1][j] == 0) ans[i][j] = 1;
                    }
                }else if(j == 0){
                    if(ans[i-1][j] == 0 && ans[i-1][j+1] == 0) ans[i][j] = 1;
                }else if(j == w-1){
                    if(ans[i-1][j] == 0 && ans[i-1][j-1] == 0) ans[i][j] = 1;
                }
            }
        }
        anss.push_back(ans);
    }

    rep(k,anss.size()){
        rep(i,anss[k].size()){
            rep(j,anss[k][i].size()){
                cout << anss[k][i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}