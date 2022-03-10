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
int powij(int i, int j){
    int ans = 1;
    rep(a,j){
        ans *= i;
    }
    return ans;
}
int main(){
    int x;
    cin >> x;
    vector<bool> flag(1005);
    vector<int> a;
    a.push_back(1);
    for(int i = 2; i <= 1005; i++){
        int j = 2;
        while(powij(i,j) <= 1005 && flag[powij(i,j)] == false){
            a.push_back(powij(i,j));
            flag[powij(i,j)] = true;
            j++;
        }
    }
    sort(a.begin(), a.end());
    int ans = 1;
    for(int i = 0; i < a.size(); i++){
        if(a[i] <= x) ans = max(ans, a[i]);
    }
    cout << ans << endl;
    return 0;
}