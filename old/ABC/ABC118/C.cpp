#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
int gcd(int a, int b){
    if(a < b) swap(a, b);
    while(a%b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return b;
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = gcd(a[0], a[1]);
    rep(i,n){
         ans = gcd(a[i], ans);
    }
    cout << ans << endl;
    return 0;
}