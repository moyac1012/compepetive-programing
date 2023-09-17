#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF 1000000
vector<long long> mahou(100000,INF);

int main()
{
    int H,N;
    cin >> H >> N;
    vector<int> A(N),B(N);
    rep(i,N) {
        cin >> A[N];
        cin >> B[N];
    }

    for (size_t i = 0; i < N; i++)
    {
        if(mahou[A[i]] > B[i]) mahou[A[i]] = A[i];
    }

    int max = *std::max_element(A.begin(), A.end());


    
    
}