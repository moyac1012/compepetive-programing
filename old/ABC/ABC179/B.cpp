#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    rep(i,n){
        int d1, d2;
        cin >> d1 >> d2;
        if(d1 == d2) cnt++;
        else{
            cnt = 0;
        }
        if(cnt == 3){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}