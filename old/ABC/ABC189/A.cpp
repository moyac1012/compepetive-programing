#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    string s;
    cin >> s;
    if(s[0] == s[1] && s[1] == s[2] && s[0] == s[2]) cout << "Won" <<endl;
    else cout << "Lost" << endl;
    return 0;
}