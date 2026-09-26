#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> like(m);
    rep(i,n){
        int k; cin >> k;
        rep(i,k){
            int a; cin >> a; a--;
            like[a]++;
        }
    }
    int cnt = 0;
    rep(i,m){
        if(like[i] == n) cnt++;
    }
    cout << cnt << endl;
    return 0;
}