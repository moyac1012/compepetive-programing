#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }

int main(){
    int n; cin >> n;
    vector<int> c(n),p(n);
    rep(i,n) cin >> c[i] >> p[i];
    vector<int> r1(n+1), r2(n+1);
    rep(i,n){
        if(c[i] == 1) r1[i+1] += p[i] + r1[i];
        else r1[i+1] = r1[i];
    }
    rep(i,n){
        if(c[i] == 2) r2[i+1] += p[i] + r2[i];
        else r2[i+1] = r2[i];
    }

    int q; cin >> q;
    rep(qi, q){
        int l,r; cin >> l >> r;
        cout << r1[r] - r1[l-1] << " " << r2[r] - r2[l-1] << endl;
    }
    return 0;
}