#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
using P = pair<int, int>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const char alp[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }

bool isatcoder(char c){
    if(c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' || c =='e'|| c == 'r' || c == '@') return true;
    else return false;
}

int main(){
    string atcoder = "atcoder";
    string s,t; cin >> s >> t;
    map<char, int> maps, mapt;
    rep(i,s.length()){
        maps[s[i]]++;
        mapt[t[i]]++;
    }

    // for(auto itr = maps.begin(); itr != maps.end(); ++itr) {
    //     std::cout << "key = " << itr->first           // キーを表示
    //                     << ", val = " << itr->second << "\n";    // 値を表示
    // }
    rep(i,s.length()){
        if(mapt[s[i]] > 0 && s[i] != '@') mapt[s[i]]--;
        if(maps[t[i]] > 0 && t[i] != '@') maps[t[i]]--;
    }

    int atmcnt = maps['@'] + mapt['@'];
    int scnt = 0, tcnt = 0;

    for(auto itr = maps.begin(); itr != maps.end(); ++itr) {
        if(itr->second > 0 && itr->first != '@'){
            if(!isatcoder(itr->first)){
                cout << "No" << endl;
                return 0;
            }
            scnt += itr->second;
        }
    }

    for(auto itr = mapt.begin(); itr != mapt.end(); ++itr) {
        // std::cout << "key = " << itr->first           // キーを表示
        //                 << ", val = " << itr->second << "\n";    // 値を表示
        if(itr->second > 0 && itr->first != '@'){
            if(!isatcoder(itr->first)){
                cout << "No" << endl;
                return 0;
            }
            scnt += itr->second;
        }                
    }

    // cout << "scnt: " << scnt << endl;
    // cout << "tcnt: " << tcnt << endl;
    // cout << "atmcnt: " << atmcnt << endl;
    if(scnt + tcnt > atmcnt) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}