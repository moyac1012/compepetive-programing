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
map<int, pair<int,int>> mp{
        {0,{0,0}},
        {1,{0,1}},
        {2,{0,2}},
        {3,{1,0}},
        {4,{1,1}},
        {5,{1,2}},
        {6,{2,0}},
        {7,{2,1}},
        {8,{2,2}},
    };

bool gakkari(vector<int>& junban, vector<vector<int>>& c){
    vector<vector<bool>> bingo(3, vector<bool>(3, false));
    for(int x: junban){
        bingo[mp[x].first][mp[x].second] = true;

        rep(i,3){
            vector<pair<int,int>> cnt;
            if(bingo[i][0] && bingo[i][1] && bingo[i][2]) continue;
            rep(j,3) if(bingo[i][j]) cnt.push_back({i,j});
            if(cnt.size() == 2){
                if(c[cnt[0].first][cnt[0].second] == c[cnt[1].first][cnt[1].second]) return true;
                cnt.clear();
            }
        }

        rep(i,3){
            vector<pair<int,int>> cnt;
            if(bingo[i][0] && bingo[i][1] && bingo[i][2]) continue;
            rep(j,3) if(bingo[j][i]) cnt.push_back({j,i});
            if(cnt.size() == 2){
                if(c[cnt[0].first][cnt[0].second] == c[cnt[1].first][cnt[1].second]) return true;
                cnt.clear();
            }
        }

        if(!(bingo[0][0] && bingo[1][1] && bingo[2][2])){
            if(bingo[0][0] && bingo[1][1]){
                if(c[0][0] == c[1][1]) return true;
            }
            if(bingo[1][1] && bingo[2][2]){
                if(c[1][1] == c[2][2]) return true;
            }
            if(bingo[0][0] && bingo[2][2]){
                if(c[0][0] == c[2][2]) return true;
            }
        }

        if(!(bingo[0][2] && bingo[1][1] && bingo[2][0])){
            if(bingo[0][2] && bingo[1][1]){
                if(c[0][2] == c[1][1]) return true;
            }
            if(bingo[1][1] && bingo[2][0]){
                if(c[1][1] == c[2][0]) return true;
            }
            if(bingo[0][2] && bingo[2][0]){
                if(c[0][2] == c[2][0]) return true;
            }
        }
    }
    return false;
}
int main(){
    vector<vector<int>> c(3, vector<int>(3));
    rep(i,3)rep(j,3) cin >> c[i][j];
    vector<int> junban = {0,1,2,3,4,5,6,7,8};
    double cnt = 0;
    double gkr = 0;
    do {
        if(gakkari(junban, c)) gkr++;
        cnt++;
    } while (std::next_permutation(junban.begin(), junban.end()));

    printf("%.20f\n", (cnt-gkr)/cnt); 
    return 0;
}