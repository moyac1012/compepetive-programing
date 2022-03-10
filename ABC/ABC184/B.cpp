#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n,x;
    cin >> n >> x;
    string s;
    cin >> s;
    rep(i,n){
        if(s[i] == 'o') x++;
        else if(s[i] == 'x' && x != 0) x--;
    }
    cout << x << endl;
    return 0;
