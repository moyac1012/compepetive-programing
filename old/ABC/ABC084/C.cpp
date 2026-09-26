#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    vector<int> c(n-1),s(n-1),f(n-1);
    rep(i,n-1) cin >> c[i] >> s[i] >> f[i];
    for(int i = 0; i < n-1; i++){
        int t = 0;
        for(int j = i; j < n-1; j++){
            if(s[j] >= t) t = s[j];
            if(t%f[j] != 0){
                t++; j--;
            }else{
                t += c[j];
            }
        }
        cout << t << endl;
    }  
    cout << 0 << endl;
    return 0;
}