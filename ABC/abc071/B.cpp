#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

string abc = "abcdefghijklmnopqrstuvwxyz";

int main()
{
    string s;
    cin >> s;
    vector<int> cnt(abc.length());
    rep(i, s.length()){
        cnt[s[i] - 'b']++;
    }
    rep(i,cnt.size()){
        if(cnt[i] == 0){
            cout << abc[i] << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}