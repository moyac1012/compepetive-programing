#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
vector<bool> seen;	//節点vを訪問したかどうかを記憶する配列
ll cnt = 0;
void dfs(Graph &G, int v){
    seen[v] = true;	//入力節点vを訪問済みにする
    for(auto next_v : G[v]) {		//すべてのvに隣接している節点について
        if(seen[next_v]) continue;	//すでに探索済みだったらスルー
        cnt++;
        dfs(G, next_v);		//それ以外で、その点からdfsを始める
    }
}

int main(){
    int n, m; 
    cin >> n >> m;
	Graph G(n);
    
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
    }
    ll ans = 0;
    seen.assign(n, false);
    for(int v = 0; v < n; v++){		//すべての節点からdfsを行う
        if(seen[v]) continue;		//訪問済みならスルー
        dfs(G, v); //dfs
        seen.assign(n, false);
        ans += cnt;
        cnt = 0;
    }
    cout << ans + n << endl;
    return 0;
}