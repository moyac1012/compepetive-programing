#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b;
    cin >> a >> b;
    int d = b - a;
    int sum = 0;
    Rep(i,1,d+1) sum += i;
    cout << sum - b << endl;
    return 0;
}