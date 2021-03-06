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
Graph G(100005);
vector<int> dist(100005);
void dfs(int v, int d, int p=-1){
    dist[v] = d;
    for(int nv : G[v]){
        if(nv == p) continue;
        dfs(nv, d+1, v);
    }
}
int main(){
    int n;
    cin >> n;
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(0,0);
    int maxdi = 0, maxd = 0;
    rep(i,n){
        if(dist[i] > maxd){
            maxd = dist[i];
            maxdi = i;
        }
    }
    dfs(maxdi, 0);
    rep(i,n){
        if(dist[i] > maxd){
            maxd = dist[i];
        }
    }
    cout << maxd + 1 << endl;
    return 0;
}