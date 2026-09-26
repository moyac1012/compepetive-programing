#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
int popcount(int n){
    string strn = to_string(n);
    int len = strn.length();
    int ans = 0;
    rep(i,len){
        if(strn[i] == '1') ans++;
    }
    return ans;
}
int bitr(int n,int p){
    string strn = to_string(n);
    if(strn[p] = '0') strn[p] = 1;
    else strn[p] = 0;
    int ans = stoi(strn);
    return ans;
}

int main()
{
    int n,x;
    cin >> n >> x;
    rep(i,n){
        int xn = bitr(x,i);

    }
    return 0;  
}