#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    map<string, int> f, fe;
    rep(i,n){
        string s; cin >> s;
        string se = s;
        if(s[0] == '!'){
            fe[s.substr(1)]++;
            se = s.substr(1);
        }
        else{
            f[s]++;
        }
        if(fe[se] >= 1 && f[se] >= 1){
            cout << se << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
    
    return 0;
}