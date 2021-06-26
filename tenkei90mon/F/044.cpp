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
    int n,q; cin >> n >> q;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int p = 0;
    rep(qi, q){
        int t; cin >> t;
        if(t == 1){
            int x,y;
            cin >> x >> y;
            x--; y--;
            swap(a[(x+p)%n], a[(y+p)%n]);
        }

        if(t == 2){
            int x,y;
            cin >> x >> y;
            p--;
            p += n;
            p %= n;
        }

        if(t == 3){
            int x,y;
            cin >> x >> y;
            x--;
            cout << a[(x+p)%n] << endl;
        }
        //cout << "p: " << p << endl;
        //print_vec(a);
    }
    return 0;
}