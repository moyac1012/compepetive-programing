#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b,k;
    cin >> a >> b >> k;
    int cnt = 0;
    for(int i = 101; i > 0; i--){
        if(a%i == 0 && b%i == 0) cnt++;
        if(cnt == k){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}