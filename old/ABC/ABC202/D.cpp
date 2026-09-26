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
    ll a,b,k; 
    cin >> a >> b >> k;
    vector<vector<ll>> c(61, vector<ll>(61));

    c[0][0] = 1;
    rep(i,60){
        rep(j,i+1){
            c[i+1][j] += c[i][j];
            c[i+1][j+1] += c[i][j];
        }
    }
    // rep(i,61){
    //     rep(j,i+1){
    //         cout << c[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    string ans = "";
    while(a+b > 0){
        ll x = 0;
        if(a != 0) x = c[a+b-1][a-1];
        if(k <= x){
            ans += 'a';
            a--;
        }else{
            ans += 'b';
            b--;
            k -= x;
        }
    }
    //cout << "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
    cout << ans << endl;
    return 0;
}