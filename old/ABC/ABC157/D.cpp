#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N,M,K;
    cin >> N >> M >> K;
    vector<int> A(M),B(M),C(K),D(K);
    rep(i,M) cin >> A.at(i) >> B.at(i);
    rep(i,K) cin >> C.at(i) >> D.at(i);
    vector<vector<int>> G(N,vector<int>(N,0));
    rep(i,M){
        G[A[i]-1][B[i]-1] = 1;
        G[B[i]-1][A[i]-1] = 1;
    }
    rep(i,K){
        G[C[i]-1][D[i]-1] = 1;
        G[D[i]-1][C[i]-1] = 1;
    }
    rep(i, N){
        rep(j, N){
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
    
}