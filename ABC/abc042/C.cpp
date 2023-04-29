#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; }

int main()
{
    int N,K;
    cin >> N >> K;
    vector<int> D(K);
    rep(i,K) cin >> D[i];
    for (size_t i = N; i <= 10*N; i++)
    {
        bool flag = false;
        rep(j,GetDigit(i)){
            rep(k,K){
                int a = i/pow(10,j);
                if(a%10 == D[k]){
                    flag = true;
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(!flag){
            cout << i << endl;
            break;
        }
    }
    
}