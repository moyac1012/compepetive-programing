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
int n,m,k;

vector<int> topological_sort(Graph &G, vector<int> &indegree, int V) {
    vector<int> sorted_vertices;

    queue<int> que;
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) {
            que.push(i);
        }
    }

    while (que.empty() == false) {
        int v = que.front();
        que.pop();

        for (int next_v : G[v]) {
            indegree[next_v] -= 1;
            if (indegree[next_v] == 0) que.push(next_v);
        }
        sorted_vertices.push_back(v);
    }

    return sorted_vertices;
}


int main(){
    cin >> n >> m >> k;
    Graph G(n);
    vector<int> indegree(n);
    
    rep(i,m){
        int a,b; cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        indegree[b] += 1;
    }
    vector<int> sorted_v = topological_sort(G, indegree, n);

    if(sorted_v.size() == n){
        for (int i = 0; i < sorted_v.size(); i++) {
            cout << sorted_v[i] + 1 << " ";
        }
    }else{
        cout << -1;
    }
    cout << endl;

    return 0;
}   