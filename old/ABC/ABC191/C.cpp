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
    int h,w; cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    int ans = 0;
    rep(i,h-1){
        rep(j,w-1){
            int cnt = 0;
            if(s[i][j] == '#') cnt++;
            if(s[i+1][j] == '#') cnt++;
            if(s[i][j+1] == '#') cnt++;
            if(s[i+1][j+1] == '#') cnt++;
            if(cnt == 1 || cnt == 3) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}