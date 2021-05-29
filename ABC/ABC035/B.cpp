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
    int t;
    cin >> s >> t;
    vector<int> cnt(5);
    rep(i,s.length()){
        if(s[i] == 'L') cnt[0]++;
        if(s[i] == 'R') cnt[1]++;
        if(s[i] == 'U') cnt[2]++;
        if(s[i] == 'D') cnt[3]++;
        if(s[i] == '?') cnt[4]++;
    }
    int x = abs(cnt[0] - cnt[1]), y = abs(cnt[2] - cnt[3]);
    if(t == 1){
        cout << x + y + cnt[4]<< endl;
        return 0;
    }else{
        if(cnt[4] == 0){
            cout << x + y<< endl;
            return 0;
        }else if(cnt[4] >= x + y){
            if(cnt[4]%2 == (x+y)%2){
                cout << 0 << endl;
            }else{
                cout << 1 << endl;
            }
        }else{
            cout << x + y - cnt[4] << endl;
        }
    }
    return 0;
}