#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int to8(int n){
    string s = to_string(n);
    string ans = "";
    while(n != 0){  
        ans += to_string(n%8);
        n /= 8;
    }
    reverse(ans.begin(), ans.end());
    return stoi(ans);
}
int main()
{   
    int n; cin >> n;
    set<int> st;
    Rep(i, 1, n+1){
        string s = to_string(i);
        string s8 = to_string(to8(i));
        rep(j,s.length()) if(s[j] == '7') st.insert(i);
        rep(j,s8.length()) if(s8[j] == '7') st.insert(i);
    }

    cout << n - st.size() << endl;
    return 0;
}