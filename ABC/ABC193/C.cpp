#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n; cin >> n;
    set<ll> num;
    for(ll a = 2; a < 1e6; a++){
        for(ll b = 2; b < 40; b++){
            if(pow(a,b) >= 1e10+10) break;
            num.insert(pow(a,b));
        }
    }
    int cnt = 0;
    for(auto i = num.begin(); i != num.end(); i++){
        if(*i <= n) cnt++;
    }
    cout << n - cnt << endl;
    return 0;
}