#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    vector<int> p(n),q(n);
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> q[i];
    rep(i,n){
        p[i]--; q[i]--;
    }
    int cntp = 0, cntq= 0;
    vector<int> a(n);
    rep(i,n) a[i] = i;
    while(a != p){
        next_permutation(a.begin(), a.end());
        cntp++;
    }
    rep(i,n) a[i] = i;
    while(a != q){
        next_permutation(a.begin(), a.end());
        cntq++;
    }
    cout << abs(cntp - cntq) << endl;
    return 0;
}