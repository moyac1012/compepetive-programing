#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n;
    string s;
    cin >> s;
    string q = "9999";
    ll ans = 0;
    while(s.length() > q.length()){
        ans += pow(10, q.length()); 
        q += '9';
    }
    ans += ((s.length()-1)/3) * ( n - pow(10, s.length()-1) ) + 1;
    cout << ans << endl;
    return 0;
}