#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,l,k;
    cin >> n >> l;
    cin >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    ll left = -1, right = l+1;
    ll ans = 0;
    while(right - left > 1){
        int mid = left + (right - left)/2;
        int cut = 0;
        int pre = 0;
        rep(i,n){
            if(a[i] - pre >= mid && l - a[i] >= mid){
                cut++;
                pre = a[i];
            }
        }
        if(cut >= k) left = mid;
        else right = mid;
    }
    cout << left << endl;
    return 0;
}