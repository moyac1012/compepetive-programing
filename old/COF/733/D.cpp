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
    int t; cin >> t;
    vector<vector<int>> anss;
    vector<int> anss2;
    rep(ti,t){
        int n; cin >> n;
        int p = 0;
        vector<int> a(n+1);
        vector<int> ans(n);
        rep(i,n) cin >> a[i];
        vector<int> cnt1(n+1);
        vector<int> cnt2(n+1);
        rep(i,n) cnt1[a[i]]++;
        vector<int> zeromem;
        Rep(i,1,n+1) if(cnt1[i] == 0) zeromem.push_back(i);
        int k = 0;
        rep(i,zeromem.size()){
            if(cnt2[a[zeromem[i]-1]] == 0){
                ans[zeromem[i]-1] = a[zeromem[i]-1];
                cnt2[a[zeromem[i]-1]]++;
                k++;
            }else{
                ans[zeromem[i]-1] = zeromem[p];
                p++;
            }
        }
        rep(i,n){
            if(ans[i] != 0) continue;
            if(cnt2[a[i]] == 0){
                ans[i] = a[i];
                cnt2[a[i]]++;
                k++;
            }else{
                ans[i] = zeromem[p];
                p++;
            }
        }
        
        anss2.push_back(k);
        anss.push_back(ans);
    }

    rep(i,anss.size()){
        cout << anss2[i] << endl;
        rep(j,anss[i].size()){
            cout << anss[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}