#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    string s;
    getline(cin, s);
    int n; cin >> n;
    vector<string> t(n);
    rep(i,n) cin >> t[i];
    string p;
    vector<string> sv;
    rep(i,s.length()){
        if(s[i] != ' ') p += s[i];
        else{
            sv.push_back(p);
            p = "";
        }
    }
    sv.push_back(p);
    rep(i,sv.size()){
        bool f = true;
        bool NG = false;
        rep(j,t[i].length()){
            if(t[i][j] != '*' && t[i][j] != sv[i][j]) f = false;
        }    
        if(f) NG = true;
        if(NG){
            rep(k, sv[i].length()) cout << "*";
            cout << " ";
        }else{
            cout << sv[i] << " ";
        }
    }
    cout << endl;

    return 0;
}