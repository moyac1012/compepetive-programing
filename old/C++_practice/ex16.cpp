#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> A(5);
    rep(i, 5) cin >> A[i];
    bool can = false;
    for (size_t i = 1; i < 5; i++)
    {
        if(A[i] == A[i-1]) can = true;
    }
    
    if(can) cout << "YES" << endl;
    else cout <<"NO"<<endl;
}