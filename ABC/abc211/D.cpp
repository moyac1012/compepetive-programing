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
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }
ll MOD = 1e9+7;

int main(){
    int n,m;
    cin >> n >> m;
    Graph G(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> dist(n, -1); 
    vector<int> cnt(n);
    queue<int> que;

    dist[0] = 0;
    que.push(0); 

    while (!que.empty()) {
        int v = que.front();
        que.pop();

        for (int nv : G[v]) {
            if (dist[nv] == -1){
                dist[nv] = dist[v] + 1;
                que.push(nv);
                if(cnt[v] == 0) cnt[nv]++;
                else cnt[nv] += cnt[v];
                cnt[nv] %= MOD;
            }else{
                if(dist[v]+1 == dist[nv]) cnt[nv] += cnt[v];
                cnt[nv] %= MOD;
            }
        }
    }

    // 結果出力 (各頂点の頂点 0 からの距離を見る)
    // for (int v = 0; v < n; ++v) cout << v << ": " << dist[v] << endl;
    // for (int v = 0; v < n; ++v) cout << v << ": " << cnt[v] << endl;
    cout << cnt[n-1]%MOD << endl;
    

    return 0;
}