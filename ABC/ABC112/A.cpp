#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    if(n == 1){
        cout << "Hello World" <<endl;
        return 0;
    }else{
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}