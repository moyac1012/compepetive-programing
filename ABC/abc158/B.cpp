#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    ll N,A,B;
    cin >> N >> A >> B;
    ll ans = 0;
    if(N > A+B){
        ans += (N/(A+B))*A;
        if(N%(A+B) <= A) ans += N%(A+B);
        else ans += A;
    }else{
        ans += A;
    }
    if(N < A) ans = N;
    cout << ans << endl;
}