#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> cnt(8);
    int tensai = 0;
    rep(i,n){
        if(1 <= a[i] && a[i] >= 399) cnt[0]++;
        else if(400 <= a[i] && a[i] >= 799) cnt[1]++;
        else if(800 <= a[i] && a[i] >= 1199) cnt[2]++;
        else if(1200 <= a[i] && a[i] >= 1599) cnt[3]++;
        else if(1600 <= a[i] && a[i] >= 1999) cnt[4]++;
        else if(2000 <= a[i] && a[i] >= 2399) cnt[5]++;
        else if(2400 <= a[i] && a[i] >= 2799) cnt[6]++;
        else if(2800 <= a[i] && a[i] >= 3199) cnt[7]++;
        else tensai++;
    }
    int m = 0;
    rep(i,8){
        if(a[i] != 0) m++;
    }
    if(m == 0){
        cout << 1 << " ";
        if(tensai < 8) cout << tensai << endl;
        else cout << 8 << endl;
        return 0;
    }
    if(m + tensai < 8){
        cout << m  << " " << m + tensai << endl;
    }else{
        cout << m << " " << m << endl;
    }
    

    return  0;
}