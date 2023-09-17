#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int N,L;
    cin >> N >> L;
    vector<string> S(N);
    rep(i,N) cin >> S[i];
    sort(S.begin(),S.end());
    string ans = "";
    rep(i,N){
        ans += S[i];
    }
    cout << ans << endl;
}