#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
long long B = pow(10, 9)+7;
int gcd(long long a, long long b)
{
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    long long N;
    cin >> N;
    vector<long long> A(N);
    rep(i,N) cin >> A[i];
    long long g = A[0];
    for (size_t i = 1; i < N; i++)
    {
        g = g*A[i] / gcd(g,A[i]);
    }
    long long ans=0;
    rep(i,N){
        ans += g/A[i];
    }
    cout << ans%B << endl;
}