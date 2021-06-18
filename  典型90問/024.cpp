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
    int n,k; cin >> n >> k;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n-1){
        if(abs(a[i]-b[i]) > k){
            cout << "No" << endl;
            return 0;
        }
        k -= abs(a[i]-b[i]);
    }
    if(abs(a[n-1]-b[n-1]) > k){
        cout << "No" << endl;
        return 0;
    }
    if(abs(a[n-1] - b[n-1])%2 == k%2) cout << "Yes" << endl;
    else cout << "No" << endl;
    

    return 0;
}