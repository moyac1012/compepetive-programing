#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int a,b,w;
    cin >> a >> b >> w;
    string text = "UNSATISFIABLE";
    w *= 1000;
    int worig = w;
    int ansmin = -1, ansmax = 0;
    for(int i = a; i <= b; i++){
        int total = 0;
        for(int j = i; j <= b; j++){
            total += w/j;
            w %= j;
        }
        if(w == 0 && ansmax < total){
            ansmax = total;
        }
        total = 0;
        w = worig;
    }
    w = worig;

    for(int i = b; i >= a; i--){
        int total = 0;
        for(int j = i; j >= a; j--){
            total += w/j;
            w %= j;
        }
        if((w == 0 && ansmin > total ) || (w == 0 && ansmin == -1)){
            ansmin = total;
        }
        total = 0;
        w = worig;
    }

    if(ansmin == -1 && ansmax != 0) ansmin = ansmax;
    else if(ansmin != -1&& ansmax == 0) ansmax = ansmin;

    if(ansmin == -1 && ansmax == 0) cout << text << endl;
    else cout << ansmin << " " << ansmax << endl;
    return 0;   
}