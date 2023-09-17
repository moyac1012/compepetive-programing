#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
using P = pair<int, int>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const char alp[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
template<typename T_n>T_n gcd(T_n a,T_n b){ if(a < b) swap(a, b); if(b == 0) return a; return gcd(b,a%b); }
template<typename T_n> T_n lcm(T_n a, T_n b){ return (a/gcd(a, b))*b; }
template<typename T_n> T_n modPow(T_n a, T_n n, T_n p){ if (n == 0) return 1; if (n == 1) return a % p; if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p; unsigned long long t = modPow(a, n / 2, p); return (t * t) % p; }
//mod mにおけるaの逆元を計算する
template<typename T_n> T_n modinv(T_n a, T_n m) { T_n b = m, u = 1, v = 0; while (b) { T_n t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }

vector<bool> Eratosthenes(int N) {
    vector<bool> isprime(N+1, true);

    isprime[0] = isprime[1] = false;

    // ふるい
    for (int p = 2; p <= N; ++p) {
        if (!isprime[p]) continue;

        for (int q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }

    return isprime;
}

int main(){
    unsigned long long n; cin >> n;
    vector<bool> isprime = Eratosthenes(300000);
    vector<unsigned long long> prime;

    for (int v = 0; v <= 300000; ++v) {
        if(isprime[v]) prime.push_back(v);
    }
    unsigned long long cnt = 0;
    rep(i,prime.size()){
        ll x = prime[i]*prime[i];
        if(x>n) break;
        Rep(j,i+1, prime.size()){
            x = prime[i]*prime[i]*prime[j];
            if(x>n) break;
            Rep(k, j+1, prime.size()){
                x = prime[i]*prime[i]*prime[j];
                x *= prime[k];
                if(x>n) break;
                x *= prime[k];
                if(x>n) break;
                cnt++;
            }
        }
    }
       cout << cnt << endl;
    return 0;
}