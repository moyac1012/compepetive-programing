#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int h,w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i,h)rep(j,w) cin >> a[i][j];
    vector<int> row, line;
    rep(i,h){
        int sum = 0;
        rep(j,w){
            sum += a[i][j];
        }
        row.push_back(sum);
    }

    rep(i,w){
        int sum = 0;
        rep(j,h){
            sum += a[j][i];
        }
        line.push_back(sum);
    }
    rep(i,row.size()){
        rep(j,line.size()){
            cout << row[i] + line[j] - a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}