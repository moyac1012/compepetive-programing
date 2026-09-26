#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int direction[4] = {0, 0, 0, 0};

int main(){
    string s;
    cin >> s;
    rep(i, s.length()){
        if(s[i] == 'E') direction[0]++;
        else if(s[i] == 'W') direction[1]++;
        else if(s[i] == 'S') direction[2]++;
        else direction[3]++;
    }
    //rep(i,4) cout << direction[i] << endl;
    if(direction[0] == 0 && direction[1] == 0 && direction[2] != 0 && direction[3] != 0 ||
       direction[0] != 0 && direction[1] != 0 && direction[2] == 0 && direction[3] == 0 ||
       direction[0] != 0 && direction[1] != 0 && direction[2] != 0 && direction[3] != 0){
           cout << "Yes" << endl;
       }else{
           cout << "No" << endl;
       }
    return 0;
}