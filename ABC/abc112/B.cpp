#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,t;
    cin >> n >> t;
    vector<pair<int, int>> ct(n);
    rep(i,n) cin >> ct[i].first >> ct[i].second;
    sort(ct.begin(), ct.end());
    rep(i,n){
        if(ct[i].second <= t){
            cout << ct[i].first << endl;
            return 0;
        }
    }
    cout << "TLE" << endl;
    return 0;
}