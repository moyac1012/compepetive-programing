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

int main(){
    int n,q; 
    cin >> n >> q;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    vector<ll> b(n-1);
    rep(i,n-1) b[i] = a[i+1] - a[i];
    ll ans = 0;
    rep(i,n-1) ans += abs(b[i]);
    //cout << ans << endl;
    rep(qi,q){
        ll l,r; cin >> l >> r;
        l--; r--;
        ll v; cin >> v;
        ll oldbl = 0, oldbr = 0, newbl = 0, newbr = 0;
        if(l-1 >= 0) oldbl = abs(b[l-1]);
        if(r <= n-2) oldbr = abs(b[r]);
        if(l-1 >= 0) b[l-1] += v;
        if(r <= n-2) b[r] -= v;
        if(l-1 >= 0) newbl = abs(b[l-1]);
        if(r <= n-2) newbr = abs(b[r]);
        ans += newbl - oldbl + newbr - oldbr;
        cout << ans << endl;
        //print_vec(b);
    }
    return 0;
}