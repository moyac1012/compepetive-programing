#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n,k,q;
    cin >> n >> k >> q;
    vector<int> a(q);
    rep(i,q) cin >> a[i];
    rep(i,q) a[i]--;
    ll wall = 1 - (k - q);
    vector<ll> score(n);
    rep(i,q) score[a[i]]++;
    rep(i,n){
        if(score[i] >= wall) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}