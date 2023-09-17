#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{  
    int N;
    string S;
    cin >> N;
    cin >> S;
    int ans = 0;
    for (size_t i = 0; i < N; i++)
    {
        if(S.substr(i,3) == "ABC") ans++;
    }
    cout << ans << endl;    
}