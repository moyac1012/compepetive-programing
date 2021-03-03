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
    vector<ll> l(100);
    l[0] = 2;
    l[1] = 1;
    for(int i=2; i <= n; i++){
        l[i] = l[i-1] + l[i-2]; 
    }
    cout << l[n] << endl;
    return 0;
}