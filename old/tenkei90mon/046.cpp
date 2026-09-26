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
    vector<ll> a(n), b(n), c(n);
    rep(i,n) {cin >> a[i]; a[i] %= 46;}
    rep(i,n) {cin >> b[i]; b[i] %= 46;}
    rep(i,n) {cin >> c[i]; c[i] %= 46;}
    vector<ll> cnta(50), cntb(50), cntc(50);

    rep(i,n){
        cnta[a[i]]++;
        cntb[b[i]]++;
        cntc[c[i]]++;
    }
    // print_vec(cnta);
    // print_vec(cntb);
    // print_vec(cntc);
    ll ans = 0;
    Rep(i,0,47)Rep(j,0,47)Rep(k,0,47){
        if((i + j + k)%46 == 0){
            ans += cnta[i]*cntb[j]*cntc[k];
        }
    }
    cout << ans << endl;
    return 0;
}