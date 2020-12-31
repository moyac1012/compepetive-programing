#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
bool prime(int n){
    double rn = sqrt(n);
    for(int i=2;i<=rn;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    int ans = 0;
    rep(i,n) {
        if(prime(p[i])) ans++;
    }
    cout << ans << endl;
    return 0;
}