#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
ll gcd(ll a, ll b){
    if(a < b) swap(a,b);
    if(b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a/gcd(a, b))*b;
}
int main(){
    ll a,b;
    cin >> a >> b;
    cout << lcm(a,b) << endl;
    return 0;
}