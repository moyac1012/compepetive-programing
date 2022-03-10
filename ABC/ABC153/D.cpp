#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long H;
    cin >> H;
    long long count = 0;
    while(H>1){
        H /= 2;
        count++;
    }
    long long ans = pow(2, count+1)-1;
    cout << ans << endl;
}