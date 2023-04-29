#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    int x[9] = {111, 222, 333, 444, 555, 666, 777, 888, 999};
    rep(i,9){
        if(n <= x[i]){
            cout << x[i] << endl;
            return 0;
        }
    }
    return 0;
}