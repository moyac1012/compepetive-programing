#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    int cnt = 1;
    while(n != 4 && n != 1 && n != 2){
        if(n%2 == 0) n = n/2;
        else n = 3*n+1;
        cnt++;
    }
    cout << cnt + 3 << endl;
    
    return 0;
}