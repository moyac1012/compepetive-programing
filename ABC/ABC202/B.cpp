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
    cin >> s;
    int n = s.length();
    reverse(s.begin(), s.end());
    string ans = "";
    rep(i,n){ 
        if(s[i] == '0') ans += '0';
        else if(s[i] == '1') ans += '1';
        else if(s[i] == '6') ans += '9';
        else if(s[i] == '8') ans += '8';
        else if(s[i] == '9') ans += '6';
    }
    cout << ans << endl;
    return 0;
}