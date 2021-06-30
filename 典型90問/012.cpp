#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }

struct UnionFind {
   vector<int> par;
   UnionFind(int N) : par(N) {
      for(int i = 0; i < N; i++) par[i] = i;
   }

   int root(int x) {
      if (par[x] == x) return x;
      return par[x] = root(par[x]);
   }

   void unite(int x, int y) {
      int rx = root(x);
      int ry = root(y);
      if (rx == ry) return;
      par[rx] = ry;
   }

   bool same(int x, int y) {
      int rx = root(x);
      int ry = root(y);
      return rx == ry;
   }
};

bool seen[2001][2001];

int main(){
    int h,w;
    cin >> h >> w;
    int q; cin >> q;
    UnionFind tree(h*w);

    rep(qi,q){
        int t; cin >> t;
        if(t == 1){
            int r,c;
            cin >> r >> c;
            r--; c--;
            rep(i,4){
                int nr = r + dx[i], nc = c + dy[i];
                if(!seen[nr][nc]) continue;
                if(nr < 0 || nr >= h || nc < 0 || nc >= w) continue;
                int hash1 = r*w + c;
                int hash2 = nr*w + nc;
                tree.unite(hash1, hash2);
            }
            seen[r][c] = true;
        }else{
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            ra--; ca--; rb--; cb--;
            int hash1 =  ra*w + ca;
            int hash2 =  rb*w + cb;
            bool f = true;
            if(!seen[ra][ca] && !seen[rb][cb]) f = false;
            if(tree.same(hash1, hash2) && f) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}