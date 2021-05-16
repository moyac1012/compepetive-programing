#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n; cin >> n;
    int x = n;
    int sum = 0;
    rep(i,10){
        sum += x%10;
        x /= 10;
    }
    if(!(n%sum)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}