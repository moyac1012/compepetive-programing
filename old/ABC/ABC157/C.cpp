#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N,M;
    cin >> N >> M;
    vector<int> s(M),c(M);
    vector<int> A(N,-1);
    rep(i,M){
        cin >> s[i] >> c[i];
    }
    int ans = -1;
    bool can = true;
    rep(i,M){
        if(s[i] == 1 && c[i] == 0 && N != 1){
            ans = -1;
            can = false;
            break;
        }

        if(A[s[i]-1] == -1 || A[s[i]-1] == c[i]){
            A[s[i]-1] = c[i];
        }else{
            ans = -1;
            can = false;
            break;
        }
    }
    
    if(!can){
        cout << ans << endl;
    }else{
        rep(i,N){
            if(N == 1 && M == 0 && A[i] == -1) A[i] = 0;
            if(i == 0 && A[i] == -1) A[i] = 1;
            if(A[i] == -1){
                A[i] = 0;
            }
        }
        rep(i,N){
            cout << A[i];
        }
        cout << endl;
    }

}  