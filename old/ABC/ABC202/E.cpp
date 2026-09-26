#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec, int n) { rep(i,n) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
Graph G(1001001);
vector<int> b(1001001), e(1001001);
vector<vector<int>> l(300005);
int k = 0;
void dfs(int v, int dp, int p = -1){
    b[v] = k++;
    l[dp].push_back(b[v]);
    for(int nv : G[v]){
        if(nv == p) continue;
        dfs(nv, dp+1, v);
    }
    e[v] = k++;
}

int main(){
    int n; cin >> n;
    vector<int> p(n);
    Rep(i,1,n) {
        cin >> p[i];
        p[i]--;
    }
    Rep(i,1,n){
        G[i].push_back(p[i]);
        G[p[i]].push_back(i);
    }
    // rep(i,n){
    //     cout << i << ": ";
    //     for(int v : G[i]) cout << v << " ";
    //     cout << endl;
    // }
    dfs(0, 0);
    //print_vec(depth,n);
    int q;
    cin >> q;
    rep(qi,q){
        int u,d; cin >> u >> d;
        u--;
        cout << lower_bound(l[d].begin(), l[d].end(), e[u]) - lower_bound(l[d].begin(), l[d].end(), b[u]) << endl;
    }
    return 0;
}