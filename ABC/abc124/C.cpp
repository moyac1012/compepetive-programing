#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    string s;
    cin >> s;
    int n = s.length();
    string b = "", w = "";
    rep(i,n){
        if(i%2 == 0){
            b += '0'; w+= '1';
        }else{
            b += '1'; w+= '0';
        }
    }
    int cnt1 = 0, cnt2 =0;
    rep(i,n){
        if(b[i] != s[i]) cnt1++;
        if(w[i] != s[i]) cnt2++;
    }
    cout << min(cnt1, cnt2) << endl;
    
    return 0;
}