#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
int GetDigit(int num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int f(int n){
    vector<int> a,b;
    rep(i, GetDigit(n)){
        a.push_back((n/(int)pow(10,i))%10);
        b.push_back((n/(int)pow(10,i))%10);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    int ans1 = 0, ans2 = 0;
    rep(i, a.size()){
        ans1 += a[i]*pow(10, i);
        ans2 += b[i]*pow(10, i);
    }
    int ans = ans1 - ans2;

    return ans;
}

int main()
{
    int n,k;
    cin >> n >> k;
    rep(i,k){
        n = f(n);
    }
    cout << n << endl;
    return 0;
}