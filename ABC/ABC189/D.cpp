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
    vector<ll> dp(2,1);
    rep(i,n){
        string s;
        cin >> s;
        vector<ll> p(2); swap(dp, p);
        rep(j,2)rep(x,2){
            int nj = j;
            if(s == "AND") nj &= x;
            else nj | x;
            dp[nj] += p[j];
        }
    }
    cout<< dp[1] << endl;
    return 0;
}