#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    ll cnt = 1;
    ll ans = 0;
    rep(i,n-1){
        if(a[i] == a[i+1]){
            cnt++;
        }else{
            ans += cnt*(a.size() - cnt);
            cnt = 1;
        }
    }
    ans += cnt*(a.size() - cnt);

    cout << ans/2 << endl;
    return 0;
}