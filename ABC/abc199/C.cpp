#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    n *= 2;
    string s;
    cin >> s;
    int q; cin >> q;
    int cnt = 0;
    rep(i,q){
        int t, a, b;
        cin >> t >> a >> b;
        a--; b--;
        if(cnt%2 == 1){
            a += n/2;
            a %= n;
            b += n/2;
            b %= n;
        }
        if(t == 1){
            char p = s[b];
            s[b] = s[a];
            s[a] = p;
        }else{
            cnt++;
        }
    }
    if(cnt%2 == 1){
        string mae = s.substr(0,n/2);
        string usiro = s.substr(n/2);
        s = usiro + mae;
    }
    cout << s << endl;
    
    return 0;
}