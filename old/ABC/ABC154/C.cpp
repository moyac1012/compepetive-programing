#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    sort(A.begin(), A.end());

    bool can = true;

    for (size_t i = 0; i < N-1; i++)
    {
        if(A.at(i) == A.at(i+1)){
            can =false;
            break;
        }
    }

    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}