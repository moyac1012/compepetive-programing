#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }

int main(){
    ll n,a,b,c;
    cin >> n >> a >> b >> c;;
    int ans = 10000;
    for(int i = 0; i <= 9999; i++){
        for(int j = 0; j <= 9999 - i; j++){
            ll cur = n - a*i - b*j; 
            if(cur < 0) continue;
            if(cur%c == 0) {
                ans = min(ans, i+j+(int)(cur/c));
            }
        }
    }
    cout << ans << endl;
    return 0;
}