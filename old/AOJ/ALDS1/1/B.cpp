#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int x,y;
    cin >> x >> y;
    if(x < y){
        int a = x;
        x = y;
        y = a;
    }
    int r = x % y;
    while(r != 0){
        x = y;
        y = r;
        r = x % y;
    }
    cout << y << endl;
    return 0;
}