#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m; cin >> n >> m;
    set<int> AC;
    vector<int> wa(n+1);
    int wacnt = 0;
    rep(i,m){
        int p;
        string s;
        cin >> p >> s;
        if(s == "WA"){
            if(AC.count(p) == 0) wa[p]++;
        }else{
            if(AC.count(p) == 0) wacnt += wa[p];
            AC.insert(p);
        }
    }
    cout << AC.size() << " " << wacnt << endl;
    return 0;
}