#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N, K;
    cin >> N >> K;
    for(int i=0;i<1000000000;i++){
        if(pow(K,i) > N){
            cout << i << endl;
            break;
        }
    }
}