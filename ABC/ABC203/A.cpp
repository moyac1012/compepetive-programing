#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b ){
        cout << c << endl;
    }else if(b == c){
        cout << a << endl;
    }else if(a == c){
        cout << b << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}