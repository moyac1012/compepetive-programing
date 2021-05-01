#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    int a,b,c; cin >> a >> b >> c;
    if(n == a || n == b || n == c){
        cout << "NO" << endl;
        return 0;
    }
    int cnt = 0;
    while(1){
        if(n == 0){
            cout << "YES" << endl;
            return 0;
        }
        if(n - 3 != a && n - 3 != b && n - 3 != c && n - 3 >= 0 && cnt != 100) n -= 3;
        else if(n - 2 != a && n - 2 != b && n - 2 != c && n - 2 >= 0 && cnt != 100) n -= 2;
        else if(n - 1 != a && n - 1 != b && n - 1 != c && n - 1 >= 0 && cnt != 100) n -= 1;
        else {
            cout << "NO" << endl;
            return 0;
        }
        cnt++;
    }
    return 0;
}