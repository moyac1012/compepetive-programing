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
    ll q; cin >> q;
    vector<ll> ans(q);
    rep(qi,q){
        int xa,ya,xb,yb,xf,yf;
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
        if(xa == xb){
            if(ya < yb) swap(ya, yb);
            if(yb < yf && yf < ya && xa == xf) ans[qi] = abs(ya - yb) + 2;
            else ans[qi] = abs(ya - yb);
        }else if(ya == yb){
            if(xa < xb) swap(xa, xb);
            if(xb < xf && xf < xa && ya == yf) ans[qi] = abs(xa - xb) + 2;
            else ans[qi] = abs(xa - xb);
        }else{
            ans[qi] = abs(xa-xb)+abs(ya-yb);
        }
    }
    rep(i,q){
        cout << ans[i] << endl;
    }
    return 0;
}