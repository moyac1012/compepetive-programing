#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,20) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }

int main(){
    int n; cin >> n;
    vector<ll> a(n), b(n), c(n), d(n);
    vector<ll> d1(10005), d2(10005);
    vector<ll> v1(10005), v2(10005);
    rep(i,n) cin >> a[i] >> b[i];
    rep(i,n) cin >> c[i] >> d[i];
    rep(i,n){
        Rep(j,i,n){
            if(i == j) continue;
            d1[i*n+j] = (a[i]-a[j])*(a[i]-a[j]) + (b[i]-b[j])*(b[i]-b[j]);
            d2[i*n+j] = (c[i]-c[j])*(c[i]-c[j]) + (d[i]-d[j])*(d[i]-d[j]);
        }
    }

    sort(d1.begin(), d1.end(), greater<ll>());
    sort(d2.begin(), d2.end(), greater<ll>());
    rep(i,n){
        a[i] -= a[0];
        b[i] -= b[0];
        c[i] -= c[0];
        d[i] -= d[0];
    }
    vector<ll> c2(n) d2(n);
    rep(i,n){
        c2[i] = -c[i];
        d2[i] = -d[i];
    }
    if(d1 == d2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}