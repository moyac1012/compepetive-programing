#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}
int main()
{
    ll N,K;
    cin >> N >> K;
    if(N == 1 || K == 1){
        cout << 0 << endl;
    }else{
        cout << gcd(N,K) << endl;
    }
}