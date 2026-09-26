#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n;
    cin >> n;
    vector<ll> a;
    ll k = 0;
    ll cnt = 0;
    rep(i,n){
        if(cnt < pow(2,k)){
            a.push_back(k+1);
            cnt++;
        }else{
            cnt = 1;
            k++;
            a.push_back(k+1);
        }
    }
    rep(i,n) cout << a[i] << " ";
    cout << endl;
    return 0;
}