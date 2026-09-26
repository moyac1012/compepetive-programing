#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a > b) cout << "Takahashi" << endl;
    else if(b > a) cout << "Aoki" << endl;
    else if(b == a && c == 0) cout << "Aoki" << endl;
    else cout << "Takahashi" << endl;
    return 0;
}