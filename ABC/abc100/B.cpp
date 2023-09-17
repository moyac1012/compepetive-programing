#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll d,n;
    cin >> d >> n;
    if(n == 100) n++;
    if(d == 0) cout << n << endl;
    else if(d == 1) cout << 100*n << endl;
    else cout << 10000*n << endl;
    return 0;   
}