#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec, int n) { rep(i,n/2) cout << vec[i]+1 << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
vector<int> col;
void dfs(Graph &G, int v, int c){
    //cout << v << " " << d << endl;
    col[v] = c;
    for(auto next_v : G[v]) {
        if(col[next_v] == -1) dfs(G, next_v, 1 - c);
    }
}

int main(){
    int n; cin >> n;
    Graph G(n);
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    col.assign(n,-1);
    dfs(G, 0, 0);
    vector<int> col0, col1;
    rep(i,n){
        if(col[i] == 0) col0.push_back(i);
        else col1.push_back(i);
    }
    if(col0.size() >= col1.size()) print_vec(col0,n);
    else print_vec(col1,n);
    return 0;
}