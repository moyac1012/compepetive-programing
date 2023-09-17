#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }

bool used[200005];
vector<bool> seen;
int vcnt = 1;
void dfs(Graph &G, int v){
    seen[v] = true;	//入力節点vを訪問済みにする
    for(auto next_v : G[v]) {		//すべてのvに隣接している節点について
        if(seen[next_v]) continue;	//すでに探索済みだったらスルー
        vcnt++;
        dfs(G, next_v);		//それ以外で、その点からdfsを始める
    }
}

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    vector<ll> b,c;
    for(int i = 0; i < n/2; i++){
        used[a[i]] = true;
        used[a[n-1-i]] = true;
        b.push_back(a[i]);
        c.push_back(a[n-i-1]);
    }
    // print_vec(b);
    // print_vec(c);
    //reverse(c.begin(), c.end());
    Graph G(200005);
    rep(i,b.size()){
        G[b[i]].push_back(c[i]);
        G[c[i]].push_back(b[i]);
    }
    // rep(i,5){
    //     cout << i << " ";
    //     rep(j,G[i].size()){
    //         cout << G[i][j] << " ";
    //     }
    //     cout <<endl;
    // }
    seen.assign(200005, false);	//seen配列をfalseで初期化
    int cnt = 0;
    for(int v = 1; v < 200005; v++){		//すべての節点からdfsを行う
        if(seen[v]) continue;		//訪問済みならスルー
        dfs(G, v);//dfs
        //if(vcnt >= 2) cout << "vcnt: " << vcnt << endl;
        cnt += vcnt - 1;//dfsが終わったら連結成分数を一個足す
        vcnt = 1;
    }
    cout << cnt << endl;
    return 0;
}