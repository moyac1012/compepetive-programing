#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    map<string, int> mp;
    int n;
    cin >> n;
    rep(i,n){
        string s;
        cin >> s;
        mp[s]++;
    }
    string ans;
    int v = 0;
    for(auto& [key, value] : mp){
        if(v < value){
            v = value;
            ans = key;
        }
    }
    cout << ans << endl;
}