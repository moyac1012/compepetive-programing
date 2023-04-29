#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int alice = 0, bob = 0;
    rep(i,a.size()){
        if(i%2 == 0) alice += a[i];
        else bob += a[i];
    }
    cout << alice - bob << endl;
    return 0;
}