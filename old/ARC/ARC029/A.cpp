#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin >> n;
    vector<int> t(n);
    rep(i,n) cin >> t[i];
    int a = 0, b = 0;
    int ans = 1e9;
    for(int bit = 0; bit < (1<<n); bit++){
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                a += t[i];
            }else{
                b += t[i];
            }
        }
        ans = min(ans, max(a, b));
        a = 0; b = 0;
    }
    cout << ans << endl;
    return 0;   
}