#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    int k = 2025 - n;
    rep(i,10)rep(j,10){
        if(i*j == k) cout << i << " x " << j << endl;
    }
    return 0;
}