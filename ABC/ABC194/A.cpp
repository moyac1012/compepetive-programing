#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b;
    cin >> a >> b;
    int w = a + b;
    if(w >= 15 && b >= 8) cout << 1 << endl;
    else if(w >= 10 && b >= 3) cout << 2 << endl;
    else if(w >= 3) cout << 3 << endl;
    else cout << 4 << endl;
    return 0;
}