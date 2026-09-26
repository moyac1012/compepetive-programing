#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int gcd(int a,int b){
    if(a < b) swap(a, b);
    while(a%b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return b;
}

bool hantei(vector<int> x, ll k){
    rep(i,x.size()){
        if(gcd(x[i], k) == 1) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i,n) cin >> x[i];
    vector<ll> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    ll ans = 1e18;

    for (int bit = 0; bit < (1<<primes.size()); ++bit) {
        vector<ll> S;
        for (ll i = 0; i < primes.size(); ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                S.push_back(primes[i]);
            }
        }

        ll y = 1;
        
        for (int i = 0; i < (int)S.size(); ++i) {
            //cout << S[i] << " ";
            y *= S[i];
        }
        if(hantei(x, y)){
            ans = min(ans, y);
        }
    }
    cout << ans << endl;
    return 0;
}