#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int x, y;
    cin >> x >> y;
    int min = 2*x;
    int max = 4*x;
    for (size_t i = min; i <= max; i+=2)
    {
        if(y == i){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    
}