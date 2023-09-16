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
ll n,m;
vector<ll> l;

bool is_OK(ll x){
    ll mm = m;
    ll nokori = x;
    rep(i,n){
        if(x-l[i] < 0) return false;
        if(nokori-l[i] >= 0){
            nokori -= l[i];
            if(nokori!=0) nokori--;
        }else{
            mm--;
            nokori = x;
            nokori -= l[i];
            if(nokori!=0) nokori--;
        }
        if(nokori<0) return false;
        if(mm <= 0 && i!=n-1 && i!=0) return false;
    }
    return true;
}

int main(){
    cin >> n >> m;
    l.resize(n);
    rep(i,n) cin >> l[i];
    ll l =-1;
    ll r = 20000000011;
    while(r-l>1){
        ll mid = l + (r-l)/2;

        if(is_OK(mid)) r = mid;
        else l = mid;
    }

    cout << r << endl;

    return 0;
}