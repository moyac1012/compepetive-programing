#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m;
    cin >> n;
    map<string, int> mp;
    rep(i,n){
        string s; cin >> s;
        mp[s]++;
    }
    cin >> m;
    rep(i,m){
        string s; cin >> s;
        mp[s]--;
    }
    int ans = 0;
    for(auto i = mp.begin(); i != mp.end(); i++){
        if(ans < i->second) ans = i->second;
    }
    cout << ans << endl;
    return 0;
}