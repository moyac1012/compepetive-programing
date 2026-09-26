#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int m,h;
    cin >> m >> h;
    if(h%m == 0) cout  << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}