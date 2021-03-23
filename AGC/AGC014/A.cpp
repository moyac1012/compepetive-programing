#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b && b == c && a%2 == 0 && b%2 == 0 && c%2 == 0){
        cout << -1 << endl;
        return 0;
    }
    int cnt = 0;
    while(a%2 == 0 && b%2 == 0 && c%2 == 0){
        int ad = (b+c)/2, bd = (a+c)/2, cd = (b+a)/2;
        a = ad; b = bd; c = cd;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}