#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> ans;
    ans.push_back(a[0]);
    int cnt = 0;
    for(int i=1;i<n;i++){
        for(int j=0;j<ans.size();j++){
            if(abs(a[i]-ans[j]) <= k){
                
            }
        }
    }
    return 0;
}