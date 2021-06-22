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
    int n; cin >> n;
    vector<vector<int>> a(1001, vector<int>(1001));
    rep(i,n){
        int lx,ly,rx,ry;
        cin >> lx >> ly >> rx >> ry;
        a[lx][ly]++;
        a[rx][ry]++;
        a[lx][ry]--;
        a[rx][ly]--;
    }
    rep(i,1001)rep(j,1000) a[i][j+1] += a[i][j];
    rep(i,1000)rep(j,1001) a[i+1][j] += a[i][j];
    vector<ll> ans(n+1);
    rep(i,1001)rep(j,1001) if(a[i][j] != 0) ans[a[i][j]]++;
    Rep(i,1,n+1) cout << ans[i] << endl;

    return 0;
}