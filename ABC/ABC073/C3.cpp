#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,t;
    cin >> n >> t;
    vector<int> tn(n);
    rep(i, n) cin >> tn[i];
    unsigned long long total = 0;
    for(int i = 0; i < n-1; i++){
        if(tn[i+1] < tn[i] + t) total += tn[i+1] - tn[i];
        else total += t;
    }
    total += t;
    cout << total << endl;
    return 0;
}