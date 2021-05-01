#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll a,b,k;
    cin >> a >> b >> k;
    rep(i,k){
        if(i%2 == 0){
            if(a%2 == 1) a--;
            b += a/2;
            a = a/2;
        }else{
            if(b%2 == 1) b--;
            a += b/2;
            b = b/2;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}