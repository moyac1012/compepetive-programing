#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

vector<bool> seen;	//節点vを訪問したかどうかを記憶する配列
void dfs(Graph &G, int v){
    seen[v] = true;	//入力節点vを訪問済みにする
    for(auto next_v : G[v]) {		//すべてのvに隣接している節点について
        if(seen[next_v]) continue;	//すでに探索済みだったらスルー
        dfs(G, next_v);		//それ以外で、その点からdfsを始める
    }
}
int main(){
    string s1, s2, s3; 
    cin >> s1 >> s2 >> s3;
    Graph G(n);
    

    seen.assign(n, false);	//seen配列をfalseで初期化
    int cnt = 0;
    for(int v = 0; v < n; v++){		//すべての節点からdfsを行う
        if(seen[v]) continue;		//訪問済みならスルー
        dfs(G, v);　//dfs
        cnt++;	　//dfsが終わったら連結成分数を一個足す
    }
}