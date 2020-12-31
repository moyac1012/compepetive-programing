#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];
    ll total = 1;
    rep(i,N){
        if(A[i] == 0){
            cout << 0 << endl;
            return 0;
        }
    }
    rep(i,N){
       if(A[i]>1e18/total){
           cout << -1 << endl;
           return 0;
       }
       total *= A[i];
    }
    if(total <= 1000000000000000000) cout << total << endl;
    else cout << -1 << endl;
}