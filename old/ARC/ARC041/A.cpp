#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)

int main(){
    int x, y, k;
    cin >> x >> y >> k;
    if(y >= k){
        cout << x + k << endl;
        return 0;
    }else{
        cout << x + y - k + y<< endl;
        return 0;
    }
    return 0;
}