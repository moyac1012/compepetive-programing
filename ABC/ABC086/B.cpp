#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int a,b;
    cin >> a >> b;
    vector<int> sq(1000);
    rep(i,1000) sq[i] = i*i;
    string as = to_string(a);
    string bs = to_string(b);
    string sab = as + bs;
    int ab = stoi(sab);
    rep(i,1000){
        if(sq[i] == ab) {
            cout << "Yes" << endl;
            return 0;    
        }
    }
    cout << "No" << endl;
    return 0;
}