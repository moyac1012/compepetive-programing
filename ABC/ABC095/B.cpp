#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int z;
    if(x > y){
        z = c*2*y+(x-y)*a;
    }else{
        z = c*2*x+(y-x)*b;
    }
    cout << min(min(x*a + y*b, z), c*2*max(x,y)) << endl;
    return 0;
}