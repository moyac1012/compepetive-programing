#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll x,y,r;
    cin >> r >> x >> y;
    ll d = x*x + y*y;
    ll n = 1;
    ll r2 = r*r;
    if(r2 == d){
        cout << n << endl;
        return 0;
    }else if(r2 >= d){
        cout << n+1 << endl;
        return 0;
    }
    while(r2 < d){
        r2 = n*n*r*r;
        n++;
    }
    cout << n - 1 << endl;
  
    return 0;
}