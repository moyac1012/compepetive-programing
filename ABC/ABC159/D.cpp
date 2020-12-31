#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
uint64_t combinations2(uint64_t n, uint64_t k) {
    uint64_t r = 1;
    for (uint64_t d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}
int main()
{
    ll N;
    cin >> N;
    vector<int> A(N);
    rep(i,N) cin >> A[N];
    vector<int> num(N);
    rep(i,N){
        num[A[i]]++;
    }
    rep(i,N){
        cout << num[i] << " ";
    }
    cout << endl;
    vector<int> conb1(N);
    vector<int> conb2(N);
    rep(i,N){
        if(num[i] != 0) {
            conb1[i] = combinations2(num[i],2);
            conb2[i] = combinations2(num[i]-1,2);
        }
    }
    rep(i,N){
        cout << conb1[i] << " ";
    }
    cout << endl;
    vector<int> ans(N);
    rep(i,N){
        ans[i] += conb2[A[i]];
        rep(j,N){
            if(i != j) ans[i] += conb1[j];
        }
    }
    rep(i,N){
        cout << ans[i] << endl;
    }
}