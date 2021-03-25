#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int x; cin >> x;
    vector<int> blist;
    blist.push_back(1);
    for(int b = 2; b < 35; b++){
        for(int i = 2;i < 10;i++){
            if(pow(b,i) <= 1000) blist.push_back(pow(b,i));
        }
    }
    sort(blist.begin(), blist.end());
    for(int i = blist.size()-1; i >= 0; i--){
        if(blist[i] <= x){ 
            cout << blist[i] << endl;
            return 0;
        }
    }
}