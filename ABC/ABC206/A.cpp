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
    double n;
    cin >> n;
    int ans = n * 1.08;
    if(ans < 206) cout << "Yay!" << endl;
    else if(ans == 206) cout << "so-so" << endl;
    else cout << ":(" << endl;
    return 0;
}