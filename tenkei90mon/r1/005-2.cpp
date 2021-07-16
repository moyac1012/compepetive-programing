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
ll MOD = 1e9+7;
struct Matrix {
    int size;
    ll x[31][31];
};

Matrix multiply(Matrix A, Matrix B){
    Matrix C;
    C.size = A.size;
    rep(i,C.size)rep(j,C.size) C.x[i][j] = 0;
    rep(i,A.size)rep(j,A.size)rep(k,A.size){
        C.x[i][k] += A.x[i][j] * B.x[j][k];
        C.x[i][k] %= MOD;
    }
    return C;
}

Matrix powers(Matrix A, ll T) {
	Matrix E[64], F;
	E[0] = A;
	for (int i = 1; i < 62; i++) {
		E[i] = multiply(E[i - 1], E[i - 1]);
	}

	F.size = E[0].size;
	for (int i = 0; i < F.size; i++) {
		for (int j = 0; j < F.size; j++) {
			if (i == j) F.x[i][j] = 1;
			if (i != j) F.x[i][j] = 0;
		}
	}

	for (int i = 62; i >= 0; i--) {
		if ((T & (1LL << i)) != 0LL) {
			F = multiply(F, E[i]);
		}
	}
	return F;
}

ll n,b,k;
ll c[11];
int main(){
    cin >> n >> b >> k;
    rep(i,k) cin >> c[i];
    Matrix A;
    A.size = b;
    rep(i,b)rep(j,b) A.x[i][j] = 0;
    rep(i,b)rep(j,k) A.x[i][(i*10+c[j])%b] += 1;

    // rep(i,b){
    //     rep(j,b){
    //         cout<< A.x[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    Matrix D = powers(A,n);
    cout << D.x[0][0] << endl;
    
    return 0;
}