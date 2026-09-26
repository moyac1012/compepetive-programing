#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<vector<int>> A(3, vector<int>(3));
    rep(i, 3){
        rep(j,3){
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    vector<int> b(N);
    rep(i,N){
        cin >> b[i];
    }

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            for (size_t k = 0; k < 3; k++)
            {
                if(A[j][k] == b[i]){
                    A[j][k] = -1;
                }
            }
        }
    }
    bool can = false;
    if(A[0][0] == A[1][1] && A[1][1] == A[2][2] || A[0][2] == A[1][1] && A[2][0] == A[1][1]){
                can = true;
    
    }
    rep(i,3){
        if(A[i][0] == A[i][1] && A[i][1] == A[i][2]){
            can = true;
        }
    }
    rep(i,3){
        if(A[0][i] == A[1][i] && A[1][i] == A[2][i]){
            can = true;
        }
    }
    // rep(i,3){
    //     rep(j,3){
    //         cout << A[i][j]<< " ";
    //     }
    //     cout << endl;
    // }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}