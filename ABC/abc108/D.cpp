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

vector<ll> u,v,w;
void pb(ll a, ll b, ll c){
    u.push_back(a);
    v.push_back(b);
    w.push_back(c);
}

int main(){
    ll l; cin >> l;
    ll n = 3, m = 3;
    pb(1,2,0);
    pb(2,3,0);
    pb(1,3,1);
    ll i = 2;
    while(i != l){
        if(i*2 <= l){
            n++;
            rep(i,w.size()) w[i] *= 2;
            pb(n-1,n,1);
            pb(n-1,n,0);
            m += 2;
            i *= 2;
        }else{
            pb(1,n,i);
            i++;
            m++;
        }
    }
    cout << n << " " << m << endl;
    rep(i,u.size()) cout << u[i] << " " << v[i] << " " << w[i] << endl;
    return 0;
}