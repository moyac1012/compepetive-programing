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

int main(){
    int n,k; cin >> n >> k;
    vector<ll> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    vector<ll> c; 
    rep(i,n) {
        c.push_back(b[i]);
        c.push_back(a[i]-b[i]);
    }
    sort(c.begin(), c.end(), greater<ll>());
    ll ans = 0;
    rep(i,k) ans += c[i];
    cout << ans << endl;
    //print_vec(c);
    return 0;
}