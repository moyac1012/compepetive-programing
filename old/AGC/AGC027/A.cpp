#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    int cnt = 0;
    rep(i,n){
        if(i == n-1){
            if(x == a[i]){
                cnt++;
            }
        }else if(x >= a[i]){
            cnt++;
            x -= a[i];
        }
    }
    cout << cnt << endl;
    return 0;
}