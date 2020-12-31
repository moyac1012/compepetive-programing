#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    vector<int> h(N);
    rep(i, N)cin >> h.at(i);

    vector<int> dp(N);
    dp.at(0) = 0;
    dp.at(1) = dp.at(0) + abs(h.at(0) - h.at(1));
    for (size_t i = 2; i < N; i++)
    {
        dp.at(i) = min((dp.at(i-2) + abs(h.at(i) - h.at(i-2))), (dp.at(i-1) + abs(h.at(i) - h.at(i-1))));
    }
    
    cout << dp.at(N-1) << endl;

}
