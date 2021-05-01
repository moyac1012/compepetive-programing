#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int gcd(int a,int b){
  	if(a < b) swap(a, b);	
		if(b == 0) return a;
		return gcd(b,a%b);
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    if(a.size() == 1){
        cout << a[0] << endl;
        return 0;
    }
    int ans = gcd(a[0], a[1]);
    rep(i,n-1){
        ans = gcd(ans, a[i]);
    }
    cout << ans << endl;
    return 0;
}