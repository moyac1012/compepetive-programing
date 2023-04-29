#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;
    vector<int> P(N);
    rep(i, N) cin >> P[i];
    int ans = 1;
    int min = P[0];
    for (size_t i = 1; i < N; i++)
    {
        if(P[i] < min){
            ans++;
            min = P[i];
        }
    }
    cout << ans << endl;
}