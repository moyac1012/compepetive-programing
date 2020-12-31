#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int x ,n;
    cin >> x >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    sort(p.begin(),p.end()); 
    rep(i,n) p[i] = p[i]-x;
    int i = 0;
    while(1){
        rep(j,n){
            if(p[j] == i){
                break;
            }
        }
        i++;
    }

    
    
}   