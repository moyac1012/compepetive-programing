#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
void hurui(vector<bool> &num, int x){
    for(int i = 0; i <= num.size(); i++){
        if(num[i] == true && i%x == 0) num[i] = false;
    }
}
int main()
{
    ll x;
    cin >> x;
    vector<bool> num(100010);
    num[0] = false;
    num[1] = false;
    for(int i = 2; i <= 100010; i++){
        num[i] = true;
    }
    vector<int> p;
    for(int i = 2; i < sqrt(100010); i++){
        if(num[i] == true){
            p.push_back(i);
            hurui(num, i);
        }
    }
    for(int i = 2; i < 100010; i++){
        if(num[i] == true) p.push_back(i);
    }
    rep(i,p.size()){
        if(p[i] >= x){
            cout << p[i] << endl;
            return 0;
        }
    }
    return 0;
}