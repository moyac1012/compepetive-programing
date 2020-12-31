#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int N;
    cin >> N;
    int ans = N%10;
    if(ans == 0) cout << "pon" << endl;
    else if(ans == 1) cout << "pon" << endl;
    else if(ans == 2) cout << "hon" << endl;
    else if(ans == 3) cout << "bon" << endl;
    else if(ans == 4) cout << "hon" << endl;
    else if(ans == 5) cout << "hon" << endl;
    else if(ans == 6) cout << "pon" << endl;
    else if(ans == 7) cout << "hon" << endl;
    else if(ans == 8) cout << "pon" << endl;
    else if(ans == 9) cout << "hon" << endl;
    return 0;
}