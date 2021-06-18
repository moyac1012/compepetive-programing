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
            rep(i,4){
                int nr = r + dx[i], nc = c + dy[i];
                if(nr < 0 || nr >= h || nc < 0 || nc >= h) continue;
                int hash1 = (r - 1)*w + (c - 1);
                int hash2 = (nr - 1)*w + (nc - 1);
                tree.unite(hash1, hash2);
            }
        }else{
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            int hash1 =  (ra - 1)*w + (ca - 1);
            int hash2 =  (rb - 1)*w + (cb - 1);
            if(tree.same(hash1, hash2)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    
    return 0;
}