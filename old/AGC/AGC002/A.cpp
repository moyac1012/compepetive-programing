#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b;
    cin >> a >> b;
    if(a <= 0 && 0 <= b){
        cout << "Zero" << endl;
    }else if(a >= 0){
        cout << "Positive" << endl;
    }else{
        if((b-a)%2 == 0) cout << "Negative" << endl;
        else cout << "Positive" << endl;
    }
    return 0;
}