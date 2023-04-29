#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    int cnt = 0;
    rep(i,n){
        int a; cin >> a;
        if(a == cnt + 1) cnt++;
    }
    if(cnt == 0) cout << "-1" << endl;
    else cout << n - cnt << endl;
    
    return 0;
}