#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    map<string, int> m;
    rep(i,n){
        if(s[i][0] == '!'){
            m[s[i]]++;
            s[i].erase(s[i].begin());
            if(m.find(s[i])){
                cout << s[i] << endl;
                return 0;
            }
        }else{
            m[s[i]]++;
            s[i] = '!' + s[i];
            if(m.find(s[i])){
                cout << s[i] << endl;
                return 0;
            }
        }
    }
    cout << "satisfiable" << endl;
    return 0;
}