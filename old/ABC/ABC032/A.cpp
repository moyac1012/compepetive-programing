#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)

int gcd(int a,int b){
    if(a < b){
        int t = b;
        b = a;
        a = t;
    }
    while(a%b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return b;
}

int main(){
    int a,b,n;
    cin >> a >> b >> n;
    int r = gcd(a, b);
    int l = a*b/gcd(a, b);
    cout << l * ((n+l-1)/l) << endl;
    return 0;
}