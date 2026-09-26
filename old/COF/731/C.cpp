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
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }

int main(){
    int q;
    cin >> q;
    vector<vector<int>> ans;
    rep(qi,q){
        vector<int> tmpans;
        int k,n,m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        rep(i,n) cin >> a[i];
        rep(i,m) cin >> b[i];
        int cnta = 0, cntb = 0;
        bool flag = true;
        while(cnta < n || cntb < m){
            if(cnta >= n){
                tmpans.push_back(b[cntb]);
                cntb++;
            }else if(cntb >= m){
                tmpans.push_back(a[cnta]);
                cnta++;
            }else if(a[cnta] < b[cntb]){
                tmpans.push_back(a[cnta]);
                cnta++;
            }else{
                tmpans.push_back(b[cntb]);
                cntb++;
            }
        }
        rep(i,tmpans.size()){
            if(tmpans[i] == 0) k++;
            else{
                if(tmpans[i] > k) flag = false;
            }
        }
        //print_vec(tmpans);
        if(flag == false) ans.push_back({-1});
        else ans.push_back(tmpans);
    }
    rep(i,q){
        if(ans[i][0] == -1) cout << -1 << endl;
        else print_vec(ans[i]);
    }

    return 0;
}