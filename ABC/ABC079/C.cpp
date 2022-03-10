#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    string s;
    cin >> s;
    vector<int> a;
    rep(i,4) a.push_back(s[i] - '0');
    for(int bit = 0; bit < (1<<3); bit++){
        int sum = a[0];
        //cout << sum << endl;
        string ans = "" + to_string(a[0]);
        for(int i = 0; i < 3; i++){
            if(bit & (1<<i)){
                sum += a[i+1];
                //cout << a[i+1] << " ";
                //cout << "sum:" << sum << endl;
                ans += '+' + to_string(a[i+1]);
            }else{
                sum -= a[i+1];
                //cout << a[i+1] << " ";
                //cout << "sum:" << sum << endl;
                ans += '-' + to_string(a[i+1]);
            }
        }

        //cout << ans << '=' << sum << endl;;
        if(sum == 7){
            cout << ans + "=7" << endl;
            return 0;
        }
    }
    return 0;
}