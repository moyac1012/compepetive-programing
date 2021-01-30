#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{   
    unsigned long long n;
    cin >> n;
    ll ans = 0;
    for(unsigned long long m = 0; m < n/2; m++){
        if((2*n-m*(m+1))%(2*(m+1)) == 0){
            ans++;
            //cout << m << endl;
        }
    }
    cout << ans*2 << endl;
    return 0;
}