#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n,k;
    cin >> n >> k;
    vector<pair<ll, ll>> ab(n);
    rep(i,n) cin >> ab[i].first >> ab[i].second;
    sort(ab.begin(), ab.end());
    rep(i,n){
        k -= ab[i].second;
        if(k <= 0){
            cout << ab[i].first << endl;
            return 0;
        }
    }
    return 0;
}