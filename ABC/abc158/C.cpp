#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int A,B;
    cin >> A >>B;
    int ans = -1;
    int moto = B*10;
    
    rep(i,10){
        int moto8 = moto*0.08;
        if(moto8 == A){
            ans = moto;
            break;
        }else{
            moto++;
        }
    }
    cout << ans << endl;

}