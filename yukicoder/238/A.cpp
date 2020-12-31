#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string S;
    cin >> S;
    int len = S.length();
    rep(i, len){
        if(S[i-1] == 'a' && S[i] == 'o'){
            S[i-1] = 'k';
            S[i] = 'i';
        }
    }
    cout << S << endl;
}