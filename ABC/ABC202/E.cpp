#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i = 0; i < (ll)(n); i++)
#define Rep(i,j,n) for(ll i = j; i < (ll)(n); i++)
using Graph = vector<vector<ll>>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int main(){
    ll n;
    cin >> n;
    Graph G(n);
    rep(i,n-1){
        ll a;
        cin >> a; a--;
        G[a].push_back(i+1);
        G[i+1].push_back(a);
    }

    vector<vector<ll>> h(n);
    vector<vector<ll>> f(n,vector<ll>(n));
    vector<ll> dist(n, -1); 
    queue<ll> que;

    dist[0] = 0;
    que.push(0);
    while (!que.empty()) {
        ll v = que.front(); 
        que.pop();

        // v から辿れる頂点をすべて調べる
        f[v][v]++;
        for (ll nv : G[v]) {
            if (dist[nv] != -1) continue; 
            f[nv][v]++;
            rep(i,n){
                if(f[v][i] >= 1) f[nv][i]++;
            }
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

    for(ll v = 0; v < n; v++){
        if(dist[v] != -1) h[dist[v]].push_back(v);
    }

    // rep(i,f.size()){
    //     cout << i << " : ";
    //     rep(j,f[i].size()){
    //         cout  << f[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // rep(i,h.size()){
    //     cout << i << " : ";
    //     rep(j,h[i].size()){
    //         cout << h[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    ll q; cin>> q;
    rep(i,q){
        ll u,d;
        cin >> u >> d;
        u--;
        ll ans = 0;
        rep(j, h[d].size()){
            if(f[h[d][j]][u] >= 1) ans++;
        }
        cout << ans << endl;
    }

    return 0;

}