#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,3*n) cin >> a[i];
    string s = "";
    rep(i,3*n) s += a[i] - '0';
    vector<int> num(n+1);
    rep(i,5) num[a[i]]++;
    
    return 0;
}