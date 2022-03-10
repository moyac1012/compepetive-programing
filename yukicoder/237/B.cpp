#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long N, M, K;
    cin >> N >> M >> K;
    char op;
    vector<long long> B(M);
    vector<long long> A(N);
    cin >> op;
    rep(i, M) cin >> B[i];
    rep(i, N) cin >> A[i];
    vector<vector<long long>> C(N, vector<long long>(M));

    if(op == '+'){
        for (size_t i = 0; i < N; i++)
        {
            for (size_t j = 0; j < M; j++)
            {
                C[i][j] = A[i] + B[j];
            }
        }
        
    }else{
        for (size_t i = 0; i < N; i++)
        {
            for (size_t j = 0; j < M; j++)
            {
                C[i][j] = A[i] * B[j];
            }
        }
    }

    long long total = 0;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            total += C[i][j]%K;
        }
    }
    
    cout << total%K << endl;

}