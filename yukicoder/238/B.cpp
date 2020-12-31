#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N,K;
    cin >> N >> K;
    vector<int> A(N),B(N);
    rep(i, N-1){
        cin >> A[i];
        cin >> B[i];
    }

    if(N < K) cout << -1 << endl;
    else cout << K-1 << endl;

}