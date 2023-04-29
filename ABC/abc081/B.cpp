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
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int cnt = 0;
    bool f = false;
    while(1){
        rep(i,n){
            if(a[i]%2 == 0) {
                a[i] /= 2;
            }else{
                f = true;
                break;
            }
        }
        if(f) break;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}