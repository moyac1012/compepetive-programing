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
deque<int> label;
vector<bool> seen(100005, false);
ll cnt = 0;
Graph G(100005), GT(100005);
void dfs1(int v){
    seen[v] = true;
    for(int next_v : G[v]){
        if(seen[next_v]) continue;
        dfs1(next_v);
    }
    label.push_front(v);
}

void dfs2(int v){
    seen[v] = true;
    cnt++;
    for(int next_v : GT[v]){
        if(seen[next_v]) continue;
        dfs2(next_v);
    }
}
int main(){
    int n,m; cin >> n >> m;
    rep(i,m){
        int a,b; cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        GT[b].push_back(a);
    }
    for(int v = 0; v < n; v++){
        if(seen[v] == false) dfs1(v);
    }
    rep(i,n) seen[i] = false;
    //rep(i,n) cout << label[i] << " ";
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(seen[label[i]]) continue;
        ll v = label[i];
        cnt = 0;
        dfs2(v);
        ans += cnt*(cnt-1)/2;
    }
    cout << ans << endl;
    return 0;
}