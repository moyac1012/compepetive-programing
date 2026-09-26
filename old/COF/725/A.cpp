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
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }

int main(){
    int t; cin >> t;
    vector<int> ans(t);
    rep(ti,t){
        int n; cin >> n;
        vector<int> a(n);
        vector<int> ar(n);
        rep(i,n) cin >> a[i];
        int maxa = 0, mina = 101;
        int argmax = 0, argmin = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > maxa) {
                maxa = a[i];
                argmax = i;
            }
            if(a[i] < mina){
                mina = a[i];
                argmin = i;
            }
        }
        
        ans[ti] = min( { max(argmax+1, argmin+1), max(n - argmax, n - argmin), n - argmax + argmin + 1, n - argmin + argmax + 1});
    }

    rep(i,ans.size()){
        cout << ans[i] << endl;
    }
    return 0;
}