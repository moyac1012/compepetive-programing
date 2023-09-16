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

ll n;
vector<vector<ll>> d;
vector<ll> issoon;
ll ans = 0;

void dfs(ll x, ll preans, ll cnt){

    if(cnt == n/2){
        ans = max(ans, preans);
        return;
    }

    rep(i,n){
        if(i == x) continue;
        if(issoon[i] == 1) continue;
        if(issoon[x] == 1) continue;
        issoon[i] = 1;
        issoon[x] = 1;
        ll ni = -1;
        rep(j,n) {
            if(issoon[j] == 0) {
                ni = j;
                break;
            }
        }
        // cout << "i: " << i << " x: " << x << " ni: " << ni << endl;
        dfs(ni, preans+d[i][x], cnt+1);
        issoon[i] = 0;
        issoon[x] = 0;
    }
}

int main(){
    cin >> n;
    d.resize(n, vector<ll>(n));
    issoon.resize(n,0);
    rep(i,n){
        Rep(j,i,n){
            if(i == j) continue;
            ll a; cin >> a;
            d[i][j] = a;
            d[j][i] = a;
        }
    }
    if(n%2 == 0){
        dfs(0,0,0);
    }else{
        rep(i,n){
            issoon[i] = true;
            dfs(0,0,0);
            issoon[i] = false;
        }
    }

    cout << ans << endl;
    return 0;
}