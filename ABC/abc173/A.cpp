#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int N;
    cin >> N;
    while(N>=1000){
        N = N - 1000;
    }   
    if(N == 0) cout << N << endl;
    else cout << 1000 - N << endl;
}