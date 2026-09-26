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
    rep(i,n) cin >> a[i];
    int flag = 1;
    while(flag){
        flag = 0;
        for(int i=n-1;i>1;i--){
            if(a[i] < a[i-1]){
                int v = a[i];
                a[i] = a[i-1];
                a[i-1] = v;
                flag = 1;
            }
        }
    }
    return 0;
}