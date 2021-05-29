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
    int a = 0,b = 0,c = 0;
    cin >> s;
    rep(i,s.length()){
        if(s[i] == 'a') a++;
        if(s[i] == 'b') b++;
        if(s[i] == 'c') c++;
    }
    if(abs(a - b) <= 1 && abs(a - c) <= 1 && abs(b - c) <= 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}