#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    vector<int> a(3);
    rep(i,3) cin >> a[i];
    sort(a.begin(), a.end());
    if(a[2] - a[1] == a[1] - a[0]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}