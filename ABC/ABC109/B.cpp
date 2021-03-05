#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)

int gcd(int a,int b){
    if(a < b){
        int t = b;
        b = a;
        a = t;
    }
    while(a%b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return b;
}

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> xi(n);
    rep(i,n) cin >> xi[i];
    vector<int> dist(n);
    rep(i,n){
        dist[i] = abs(x - xi[i]);
    }
    if(n == 1) {
        cout << abs(xi[0] - x) << endl;
        return 0;
    }
    int ans = gcd(dist[0],dist[1]);
    rep(i,n){
        ans = gcd(ans, dist[i]);
    }
    cout << ans << endl;
    return 0;
}