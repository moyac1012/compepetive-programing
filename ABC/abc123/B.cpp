#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)

int main(){
    vector<int> a(5);
    rep(i,5) cin >> a[i];
    int ans = 0;
    sort(a.begin(), a.end());
    int maxtime = 0;
    int maxi = 0;
    rep(i,5){
        if(a[i]%10 == 0) continue;
        else{
            if(maxtime < (10 - (a[i]%10)) ){
                maxtime = (10 - (a[i]%10));
                maxi = i;
            }
        }
    }
    swap(a[4], a[maxi]);
    rep(i,4){
        if(a[i]%10 == 0) ans += a[i];
        else ans += a[i] + (10 - a[i]%10);
    }
    ans += a[4];
    cout << ans << endl;
    return 0;
}