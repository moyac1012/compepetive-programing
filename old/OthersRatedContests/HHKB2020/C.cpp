#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    int now = 0;
    vector<int> cnt(200001);
    vector<int> ans;
    rep(i,n){
        cnt[p[i]]++;
        while(1){
            if(cnt[now] == 0) {
                ans.push_back(now);
                break;
            }
            now++;
        }
    }
    rep(i, ans.size()){
        cout << ans[i] << endl;
    }
    return 0;
}