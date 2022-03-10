#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    map<string, int> cnt;
    rep(i,n){
        cnt[s[i]]++;
    }
    int maxv = 0;
    for (auto i = cnt.begin(); i != cnt.end(); ++i) {
        maxv = max(maxv, i->second);
    }
    for (auto i = cnt.rbegin(); i != cnt.rend(); ++i) {
        if(i->second == maxv) cout << i->first << endl;
    }
    
    return 0;
}