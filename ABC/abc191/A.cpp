#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int v,t,s,d;
    cin >> v >> t >> s >> d;
    if(v*t <= d && d <= v*s){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}