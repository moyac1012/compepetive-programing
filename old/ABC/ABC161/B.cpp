#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int N,M;
    cin >> N >> M;
    vector<int> A(N);
    rep(i,N) cin >> A.at(i);
    int total = 0;
    rep(i,N){
        total += A.at(i);
    }
    int ans = 0;
    rep(i,N){
        if(A[i]*4*M >= total){
            ans++;
        }
    }
    if(ans >= M) cout << "Yes" << endl;
    else cout << "No" << endl;
}