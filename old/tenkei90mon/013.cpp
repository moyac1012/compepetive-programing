#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
ll n,m;
using Graph = vector<vector<pair<int, ll>>>;
ll INF = 1LL << 60;
vector<ll> dist(100005);
vector<ll> dist1(100005);
vector<ll> distN(100005);
Graph G(100009);
void dijkstra(int v){
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    rep(i,n) dist[i] = 1LL << 60;
    dist[v] = 0;
    q.push(make_pair(0, v));
    while(!q.empty()){
        ll curv = q.top().second;
        q.pop();
        for(pair<int, ll> next_v : G[curv]){
            int to = next_v.first;
            ll cost = next_v.second;
            if(dist[to] > dist[curv] + cost){
                dist[to] = dist[curv] + cost;
                q.push(make_pair(dist[to], to));
            }
        }
    }
}

int main(){
    cin >> n >> m;
    rep(i,m){
        ll a,b,c;
        cin >> a >> b >> c;
        a--; b--;
        G[a].push_back(make_pair(b,c));
        G[b].push_back(make_pair(a,c));
    }
    dijkstra(0);
    rep(i,n) dist1[i] = dist[i];
    dijkstra(n-1);
    rep(i,n) distN[i] = dist[i];

    rep(i,n) cout << dist1[i] + distN[i] << endl;

    return 0;
}   