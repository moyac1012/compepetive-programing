#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int H,N;
    cin >> H >> N;

    vector<int> A(N);
    rep(i, N) cin >> A[i];

    //sort(A.begin(), A.end());
    //reverse(A.begin(), A.end());

    int total = 0;
    rep(i, N) total += A[i];

    if(total >= H) cout << "Yes" << endl;
    else cout << "No" << endl;

}