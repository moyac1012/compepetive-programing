#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{  
    int n,m;
    cin >> n >> m;
    n = n-1;
    m = m-1;
    cout << n * m << endl;
    return 0;
}