#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}


int main() {
    int n = 10;
    string s;
    cin >> s;
    int ocnt = 0;
    rep(i,s.length()){
        if(s[i] == 'o') ocnt++;
    }
    if(ocnt > 4){
        cout << 0 << endl;
        return 0;
    }
    int ans = 0;
    for(int v = 0; v < 10000; v++){
        int x = v;
        int x1,x2,x3,x4;
        vector<int> flag(10);
        x1 = x%10;
        x /= 10;
        x2 = x%10;
        x /= 10;
        x3 = x%10;
        x /= 10;
        x4 = x%10;
        if(s[x1] == 'x' || s[x2] == 'x' || s[x3] == 'x' || s[x4] == 'x') continue;

        if(s[x1] == 'o') { flag[x1]++; }
        if(s[x2] == 'o') { flag[x2]++; }
        if(s[x3] == 'o') { flag[x3]++; }
        if(s[x4] == 'o') { flag[x4]++; }
        bool f = true;
        int cnt = 0;
        rep(i,10){
            if(flag[i] >= 1) cnt++;
        }
        if(cnt < ocnt) f = false;

        if(f) {
            ans++;
            //cout << v << endl;
        }
    }
    cout << ans << endl;
}