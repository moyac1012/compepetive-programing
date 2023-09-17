#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int n,s,d;
    cin >> n >> s >> d;
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];
    rep(i,n){
        if(x[i] < s && y[i] > d){
            cout<< "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}