#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll a,b,x;
    cin >> a >> b >> x;
    ll p = b/x;
    ll q = a/x;
    if(a%x == 0) cout << p - q + 1 << endl;
    else cout << p - q << endl;
    return 0;
}