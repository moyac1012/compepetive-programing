#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N, R;
    cin >> N >> R;

    if(N >= 10) cout << R << endl;
    else cout << R + (100 * (10 - N)) << endl;
}