#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    if(a == 0 && b == 0) {
        cout << '=' << endl;
    }else if(a == b){
        cout << '=' << endl;
    }else if(a >= 0 && b >= 0){
        if(a > b) cout << '>' << endl;
        else if(a == b) cout << '=' << endl;
        else cout << '<' << endl;
    }else if(a >= 0 && b < 0){
        if(c%2 == 0){
            b *= -1;
            if(a == b) cout << '=' << endl;
            else if(a > b) cout << '>' << endl;
            else cout << '<' << endl;
        }else{
            cout << '>' << endl;
        }
    }else if(a < 0 && b >= 0){
        if(c%2 == 0){
            a *= -1;
            if(a > b) cout << '>' << endl;
            else if(a == b) cout << '=' << endl;
            else cout << '<' << endl;
        }else{
            cout << '<' << endl;
        }
    }else{
        if(c%2 == 0){
            a *= -1;
            b *= -1;
            if(a > b) cout << '>' << endl;
            else if(a == b) cout << '=' << endl;
            else cout << '<' << endl;
        }else{
            if(a > b) cout << '>' << endl;
            else if(a == b) cout << '=' << endl;
            else cout << '<' << endl;
        }
    }
    return 0;
}