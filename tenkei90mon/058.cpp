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
int culc(int n){
    int x = n;
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return (sum+x)%100000;
}
int used[100005];

int main(){
    int n; cin >> n;
    ll k; cin >> k;
    vector<int> next(100005);
    rep(i,100001) next[i] = culc(i);
    rep(i,100005) used[i] = -1;
    if(n == 0){
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0;
    for(ll i = 0; i < k; i++){
        if(used[n] == -1){
            used[n] = cnt;
            n = next[n];
            cnt++;
        }else{
            break;
        }
    }
    if(k > cnt){
        int c = cnt - used[n];
        k = (k - cnt)%c + used[n];
        rep(i,100001){
            if(k == used[i]) n = i;
        }
    }
    cout << n << endl;
    return 0;
}