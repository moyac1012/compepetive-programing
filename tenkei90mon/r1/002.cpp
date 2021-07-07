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
bool judge(string s){
    int n = 0;
    rep(i,s.length()){
        if(s[i] == '(') n++;
        else n--;
        if(n < 0) return false;
    }
    return (n == 0)?true:false;
}
int main(){
    ll n;
    cin >> n;
    vector<string> ans;
    for(int bit = 0; bit < (1<<n); bit++){
        string s = "";
        for(int i = 0; i < n; i++){
            if(bit & (1<<i)){
                s += '(';
            }else{
                s += ')';
            }
        }
        if(judge(s)) ans.push_back(s);
    }
    sort(ans.begin(), ans.end());
    rep(i,ans.size()) cout << ans[i] << endl;
    return 0;
}