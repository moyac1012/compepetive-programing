#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n, m, t;
    cin >> n >> m >> t;
    int c = n;
    int beforea = 0,beforeb = 0;
    rep(i,m){
        int a,b;
        cin >> a >> b;
        n -= a - beforeb;
        if(n <= 0){
            cout << "No" << endl;
            return 0;
        }
        n += b - a;
        n = min(n, c);
        beforea = a;
        beforeb = b;
    }
    n -= t - beforeb;
    if(n <= 0){
            cout << "No" << endl;
            return 0;
    }
    cout << "Yes" << endl;



    return 0;
}