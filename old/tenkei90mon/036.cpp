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
    vector<ll> x(n),y(n);
    ll xmax = -(1LL<<60), ymax = -(1LL<<60), xmin = 1LL<<60, ymin = 1LL<<60;
    rep(i,n) {
        ll xi, yi;
        cin >> xi >> yi;
        x[i] = xi - yi;
        y[i] = xi + yi;
        xmax = max(xmax, x[i]);
        ymax = max(ymax, y[i]);
        xmin = min(xmin, x[i]);
        ymin = min(ymin, y[i]);
    }

    rep(qi, q){
        int qu; cin >> qu; qu--;
        ll ans1 = abs(x[qu] - xmin); 
        ll ans2 = abs(x[qu] - xmax);
        ll ans3 = abs(y[qu] - ymin);
        ll ans4 = abs(y[qu] - ymax);
        cout << max({ans1, ans2, ans3 ,ans4}) << endl;
    }
    
    return 0;
}