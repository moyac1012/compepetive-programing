#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i = 0; i < (ll)(n); i++)
#define Rep(i,j,n) for(ll i = j; i < (ll)(n); i++)
using Graph = vector<vector<ll>>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
ll slowsolve(ll n, ll k){
    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n; j++){
            if((i+j)%k != 0) continue;
            for(ll l = 1; l <= n; l++){
                ll a = i+j, b = i+l, c = j+l;
                if(a%k == 0 && b%k == 0 && c%k == 0) {
                    ans++;
                }
            }
        }
    }
    return ans;
}

ll solve(ll n, ll k){
    ll cnt0 = 0, cnt1 = 0;
    for(int i = 1; i <= n; i++) if(i%k == 0) cnt0++;
    cnt0 = cnt0*cnt0*cnt0;
    if(k%2 == 0){
        for(int i = 1; i <= n; i++) if(i%k == k/2) cnt1++;
        cnt1 = cnt1*cnt1*cnt1;
    }
    return cnt0+cnt1;
}

int main(){
    ll n,k; cin >> n >> k;
    cout << solve(n,k) << endl;;
    return 0;
}