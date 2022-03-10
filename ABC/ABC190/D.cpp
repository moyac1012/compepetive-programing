#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n;
    cin >> n;
    ll cnt = 0;
    for(ll i = 1; i * i < 2*n; i++){
        if(2*n%i == 0){
            if(i%2 != ((2*n)/i)%2) cnt++;
        }
    }     
    cout << cnt*2 << endl;

    return 0;
}