#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

vector<ll> enum_divisors(ll N) {
    vector<ll> res;
    for (unsigned long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

bool hantei(vector<ll> x, ll ans){
    rep(i, x.size()){
        if(x[i] > ans) return false;
    }
    return true;
}

int main(){
    ll n;
    cin >> n;
    vector<ll> x(n);
    rep(i,n) cin >> x[i];
    sort(x.begin(), x.end());
    set<ll> divset;
    rep(i,n){
        vector<ll> a = enum_divisors(x[i]);
        divset.insert(a[1]);

    }
    ll ans = 1;
    for(auto itr = divset.begin(); itr != divset.end(); ++itr) {
        ans *= *itr;
    }
    
    if(!hantei(x, ans)){
        for(ll i = 2; i <= 1000000; i++){
            if(hantei(x, ans*i)){
                ans *= i;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}