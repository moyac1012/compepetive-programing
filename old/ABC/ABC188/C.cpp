#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    vector<int> a((1<<n));
    vector<int> origina;
    rep(i,(1<<n)) cin >> a[i];
    origina = a;
    vector<int> na;
    while(a.size() != 2){
        for(int i = 0; i < a.size(); i += 2){
            na.push_back(max(a[i], a[i+1]));
        }
        a = na;
        na.clear();
    }
    int ans = min(a[0], a[1]);
    rep(i,(1<<n)){
        if(origina[i] == ans){
            cout << i+1 << endl; 
            return 0;
        }
    }
    return 0;   
}