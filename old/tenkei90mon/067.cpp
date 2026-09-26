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
ll sto8(string n){
    ll base = 1, ans = 0;
    for(int i = n.size()-1; i >= 0; i--){
       ans += (n[i] - '0')*base;
       base *= 8;
    }
    return ans;
}

string to9(ll n){
    string ans = "";
    while(n != 0){
        ans = to_string(n%9) + ans;
        n /= 9;
    }
    rep(i,ans.length()){
        if(ans[i] == '8') ans[i] = '5';
    }
    return ans;
}

int main(){
    string n; cin >> n;
    ll k; cin >> k;
    ll ans;
    if(n == "0"){
        cout << 0 << endl;
        return 0;
    }
    rep(i,k){
        ans = sto8(n);
        n = to9(ans);
    }
    cout << n << endl;
    return 0;
}