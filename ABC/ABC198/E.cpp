#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

vector<int> c;
vector<int> seen_color;
vector<int> ans;
void dfs(Graph &G, int v, int p=-1){
    if(!seen_color[c[v]]) ans.push_back(v+1);
    seen_color[c[v]]++;
    for(auto next_v : G[v]) {
        if(next_v == p) continue;	
        dfs(G, next_v, v);
    }
    seen_color[c[v]]--;
}

int main(){
    int n; 
    cin >> n;
	Graph G(n);
    c.assign(n, 0);
    rep(i,n) cin >> c[i];
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        a--; b--;
        G[b].push_back(a);
        G[a].push_back(b);
    }

    seen_color = vector<int>(100001);
    dfs(G,0);
    sort(ans.begin(), ans.end());
    rep(i,ans.size()){
        cout << ans[i] << endl;
    }
    return 0;
}