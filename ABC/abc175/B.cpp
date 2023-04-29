#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i,n) cin >> l[i];
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = j; k < n; k++){
                if(l[i] != l[j] && l[j] != l[k] && l[k] != l[i]){
                    if(l[i] + l[j] > l[k] && l[j] + l[k] > l[i] && l[k] + l[i] > l[j]){
                        ans++;
                        //cout << i+1 << " " << j+1 << " " << k+1 << endl;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}