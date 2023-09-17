#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    map<int, string> m;
    rep(i,n){
        string s;
        int t;
        cin >> s >> t;
        m[t] = s; 
    }
    int num = 1, cnt = 0;
    for (auto i = m.rbegin(); i != m.rend(); ++i) {
        if(cnt == num) {
            cout << i->second << endl;
            return 0;
        }
        cnt++;
    }

    return 0;
}