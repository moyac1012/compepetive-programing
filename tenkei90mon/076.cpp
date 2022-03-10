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
    int n; cin >> n;
    vector<ll> a(3*n);
    ll total_size = 0;
    rep(i,n){
        cin >> a[i+n];
        a[i] = a[i+n];
        a[i+(2*n)] = a[i+n];
        total_size += a[i+n];
    }
    //print_vec(a);
    ll size = 0;
    int j = 0;
    for(int i = 0; i < 3*n; i++){
        size += a[i];
        while(total_size < size*10 && j != i) {
            size -= a[j];
            j++;
        }
        //cout << "size: " << size << endl;
        if(total_size == size*10){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}