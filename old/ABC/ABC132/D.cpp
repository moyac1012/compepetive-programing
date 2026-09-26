#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

std::vector<std::vector<long long>> comb(int n, int r) {
  std::vector<std::vector<long long>> v(n + 1,std::vector<long long>(n + 1, 0));
  for (int i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++) {
    for (int k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
    }
  }
  return v;
}

int main()
{
    ll n,k;
    cin >> n >> k;
    ll MOD = 1e9 + 7;

    for(int i = 1; i < k; i++){
        vector<vector<ll>> v1 = comb(n-k+1, i) ;
        vector<vector<ll>> v2 = comb(k-1, i-1);
        cout << v1[n-k+i][i]*v1[k-1][i-1] << endl;
    }
    return 0;
}