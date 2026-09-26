#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll n,m;
    cin >> n >> m;
    vector<int> cnt(n);
    rep(i,n){
        string s;
        cin >> s;
        rep(j,m){
            if(s[j] == '1') cnt[i]++;;
        }
    }
    // rep(i,n){
    //     cout << cnt[i] << endl;
    // }
    ll total = n*(n-1)/2;
    ll a = 0;
    rep(i,n){
        // if(cnt[i]==cnt[i+1]) a++;
        // else{
        //     a++;
        //     total -= a*(a-1)/2;
        //     total -= (a-1)*(n-a);
        //     a = 0;
        // }
        cnt[i] %= 2;
    }
    sort(cnt.begin(), cnt.end());
    ll cnt1 = count(cnt.begin(), cnt.end(), 1);
    ll cnt0 = n - cnt1;
    cout << cnt1*cnt0 << endl;
    return 0;
}