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
ll MOD = 1e9+7;
int main(){
    int t; cin >> t;
    vector<ll> ans(t);
    rep(ti,t){
        ll n; cin >> n;
        ll i = 2, prev = n, cnt = 2;
        while((prev - (ll)(n/i) > 0)){
            ans[ti] += (prev - (ll)(n/i))*cnt;
            ans[ti] %= MOD;
            prev = n/i;
            i /= cnt-1;
            cnt++;
            i *= cnt;
            // cout << "prev: " << prev  << " i: " << i << endl;
            // cout <<(prev - (ll)(n/i))*cnt << endl;
        }
    }
    rep(i,t){
        cout << ans[i] << endl;
    }
    return 0;
}