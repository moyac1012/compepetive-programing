#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    string c0,c1,c2,c3;
    c0 = "AC";
    c1 = "WA";
    c2 = "TLE";
    c3 = "RE";
    int nc0,nc1,nc2,nc3;
    nc0 = 0;nc1 = 0;nc2 = 0;nc3 = 0;
    int N;
    string S;
    cin >> N;
    rep(i, N){
        cin >> S;
        if(S == c0){
            nc0++;
        }else if(S == c1){
            nc1++;
        }else if(S == c2){
            nc2++;
        }else{
            nc3++;
        }
    }
    cout << "AC x " << nc0 << endl;
    cout << "WA x " << nc1 << endl;
    cout << "TLE x " << nc2 << endl;
    cout << "RE x " << nc3 << endl;

}