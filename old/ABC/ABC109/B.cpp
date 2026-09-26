#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    vector<string> w(n);
    rep(i,n) cin >> w[i];
    set<string> word;
    rep(i,n) word.insert(w[i]);
    if(word.size() != n){
        cout << "No" << endl;
        return 0;
    }
    rep(i,n-1){
        if(w[i][w[i].length()-1] != w[i+1][0]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}