#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int binarysearch(vector<int> s, int n){
    int left = 0, right = s.size()-1;
    while(right >= left){
        int mid = left + (right - left)/2;
        if(s[mid] == n) return mid;
        else if(s[mid] > n) right = mid - 1;
        else if(s[mid] < n) left = mid + 1;
    }
    return -1;
}

int main()
{
    int n,q;
    cin >> n;
    vector<int> s(n);
    rep(i,n) cin >> s[i];
    cin >> q;
    vector<int> t(q);
    rep(i,q) cin >> t[i];

    int ans = 0;
    rep(i,q){
        int k = binarysearch(s, t[i]);
        if(k != -1) ans++;
    }
    cout << ans << endl;

    return 0;
}