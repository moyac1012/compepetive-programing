#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N,S;
    cin >> N >> S;
    vector<int> A(N),P(N);
    rep(i,N) cin >> A[i];
    rep(i, N) cin >> P[i];
    int ans = 0;
    for(int x : A){
        for(int y : P){
            if(x + y == S) ans++;
        }
    }
    cout << ans << endl;
}