#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<int> X(N);
    rep(i,N){
        cin >> X[i];
    }
    ll total = 0;
    ll ans = 100000000;
    rep(i,101){
        rep(j,N){
            total += pow(X[j]-i,2);
        }
        if(ans > total) ans = total;
        total = 0;
    }
    cout << ans << endl;
}