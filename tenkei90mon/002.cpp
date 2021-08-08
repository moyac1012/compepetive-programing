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
    vector<string> ans;
    for(int bit = 0; bit < (1<<n); bit++){
        string s = "";
        for(int i = 0; i < n; i++){
            if(bit & (1<<i)){
                s += '(';
            }else{
                s += ')';
            }
        }
        //cout << s << endl;
        int cntl = 0, cntr = 0;
        bool f = true;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                cntl++;
            }else{
                cntr++;
            }
            if(cntl < cntr) f = false;
        }

        if(f && cntl == cntr)ans.push_back(s);
    }
    sort(ans.begin(), ans.end());
    rep(i,ans.size()){
        cout << ans[i] << endl;
    }
    return 0;
}