#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    int x = 1,y = 1, z = 1;
    cin >> n;
    vector<int> a(n);
    for (size_t i = x; i <= 98; i++)
    {
        for (size_t j = y; j <= 98; j++)
        {
            for (size_t k = z; k <= 98; k++)
            {
                int xyz = i+j+k;
                int fn = xyz*xyz-i*j-j*k-k*i;
                if( fn <= n){
                    a[fn-1]++;
                }
            }
            
        }
        
    }
    rep(i,n){
        cout << a[i] << endl;
    }
    return 0;
}