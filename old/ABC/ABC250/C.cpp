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

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> x(q);
    rep(i,q) cin >> x[i];
    
    vector<int> index(n+1), p(n+1);
    Rep(i,1,n+1){
        index[i] = i;
        p[i] = i;
    }
    rep(i,q){
        int p0 = index[x[i]];
		int p1 = p0;
		if(p0 != n) p1++;
		else p1--;
		int v0 = p[p0];
		int v1 = p[p1];
		swap(p[p0], p[p1]);
		swap(index[v0], index[v1]);
    }

    Rep(i,1,n+1) cout << p[i] << " ";
    cout << endl;
    return 0;
}