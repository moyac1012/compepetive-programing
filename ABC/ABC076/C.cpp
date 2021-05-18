#include <bits/stdc++.h>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
bool issame(string s, string t){
    int n = s.length();
    rep(i,n){
        if(s[i] != t[i] && s[i] != '?'){
            return false;
        }
    }
    return true;
}

int main(){
    string s,t;
    cin >> s >> t;
    int ssize = s.length();
    int tsize = t.length();
    vector<string> x;
    rep(i, ssize - tsize + 1){
        if(issame(s.substr(i, tsize),t)){
            string a  = s;
            for(int j = i; j < i + tsize; j++){
                a[j] = t[j-i];
            }
            rep(j,a.size()){
                if(a[j] == '?') a[j] = 'a';
            }
            x.push_back(a);
        }
    }
    sort(x.begin(), x.end());
    if(x.empty()) cout << "UNRESTORABLE" << endl;
    else cout << x[0] << endl;
    return 0;
}