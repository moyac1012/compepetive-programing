#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b; cin >> a >> b;
    if(a >= b){
        rep(i,a) cout << i + 1 << " ";
        int total = a*(a+1)/2;
        rep(i, b-1){
            cout << -(i + 1) << " ";
            total -= (i+1);
        }
        if(total != 0) cout << -total << endl;
        else cout << endl;
    }else{
        rep(i,b) cout << -(i + 1) << " ";
        int total = b*(b+1)/2;
        rep(i, a-1){
            cout << i + 1 << " ";
            total -= (i+1);
        }
        if(total != 0) cout << total << endl;
        else cout << endl;
    }
    return 0;
}