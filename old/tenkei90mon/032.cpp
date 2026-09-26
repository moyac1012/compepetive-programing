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

int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    rep(i,n)rep(j,n) cin >> a[i][j];
    int m; cin >> m;
    vector<vector<bool>> notfriend(11, vector<bool>(11));
    rep(i,m){
        int x,y; cin >> x >> y;
        x--; y--;
        notfriend[x][y] = true;
    }

    vector<int> p(n);
    rep(i,n) p[i] = i;
    int ans = 1000001;
    do { 
        bool no = false;
        int cur = 0;
        rep(i,n) cur += a[p[i]][i];
        //cout << "cur: " <<cur << endl;
        rep(i,n-1) if(notfriend[p[i]][p[i+1]] || notfriend[p[i+1]][p[i]]) no = true;

        //print_vec(p);
        if(!no) ans = min(ans, cur);
    }while(next_permutation(p.begin(), p.end()));
    if(ans == 1000001) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}