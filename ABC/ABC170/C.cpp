#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int x,n;
    cin >> x >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    vector<int> ans(101);
    rep(i,n) ans[p[i]] = 1;
    int q = 1000000000;
    for (int i = 1; i <= 100; i++)
    {
        if(ans[i] == 0){
            q = min(q,abs(x-i));
        }
    }
    for (int i = 1; i <= 100; i++)
    {
        if(ans[i] == 0){
            q = min(q,abs(x+1));
        }
    }
    if(ans[abs(x-q)] == 0) cout << x-q << endl;
    else cout << x+q << endl;
}