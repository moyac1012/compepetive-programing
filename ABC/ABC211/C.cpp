#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; ll t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }
ll mod = 1e9+7;
ll dp[100009][9];
int main(){
    string s; cin >> s;
    int n = s.length();
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
		for (int j = 0; j <= 8; j++) {
			dp[i + 1][j] += dp[i][j];
			if (s[i] == 'c' && j == 0) dp[i + 1][j + 1] += dp[i][j];
			if (s[i] == 'h' && j == 1) dp[i + 1][j + 1] += dp[i][j];
			if (s[i] == 'o' && j == 2) dp[i + 1][j + 1] += dp[i][j];
			if (s[i] == 'k' && j == 3) dp[i + 1][j + 1] += dp[i][j];
			if (s[i] == 'u' && j == 4) dp[i + 1][j + 1] += dp[i][j];
			if (s[i] == 'd' && j == 5) dp[i + 1][j + 1] += dp[i][j];
			if (s[i] == 'a' && j == 6) dp[i + 1][j + 1] += dp[i][j];
			if (s[i] == 'i' && j == 7) dp[i + 1][j + 1] += dp[i][j];
		}
		for (int j = 0; j <= 8; j++) dp[i + 1][j] %= mod;
	}

	// Step #3. Output the answer
	cout << dp[n][8] << endl;
    return 0;
}