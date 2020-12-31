#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (long long)(n); i++)

int main()
{
    long long N,K;
    cin >> N >> K;
    vector<long long> H(N);
    rep(i, N) cin >> H[i];
    sort(H.begin(), H.end());
    long long total = 0;
    rep(i,N-K) total += H[i];
    cout << total << endl;  

}