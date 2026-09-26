#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b,k;
    cin >> a >> b >> k;
    if(a + k - 1>= b - k + 1){
        for(int i = a; i <= b; i++) cout << i << endl;
        return 0;
    }
    for(int i = a; i <= a+k-1; i++) cout << i << endl;
    for(int i = b-k+1; i <= b; i++) cout << i << endl;

    return 0;
}