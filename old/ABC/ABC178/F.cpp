#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> ans(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    int j = n-1;
    rep(i,n){
        if(a[i] == b[j]){
            cout << "No" << endl;
            return 0;
        }
        ans[i] = b[j];
        j--;
    }
    cout << "Yes" << endl;
    rep(i,n){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}