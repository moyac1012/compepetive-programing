#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n,k;
    cin >> n >> k;
    if(k == 1) {
        cout << 1 << " " << 1 << " " << 1 << endl;
        return 0;
    }
    ll cnt = 1;
    ll i = 1;
    while(cnt >= k){
        cnt += 3*i;
        i++;
    }
    ll wa = (i*(i-1)/2)*3;
    k -= wa+1;
    
    return 0;
}