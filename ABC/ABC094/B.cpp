#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    vector<int> a(m);
    rep(i,m) cin >> a[i];
    int left = 0, right = 0;
    for(int p : a){
        if(p < x) left++;
        else right++;
    }
    cout << min(right, left) << endl;
    return 0;
}