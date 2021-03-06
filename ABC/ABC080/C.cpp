#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
bool find(vector<ll> s, ll key){
    rep(i,s.size()){
        if(s[i] == key){
            return true;
        }
    }
    return false;
}


int main(){
    string s;
    cin >> s;
    string origins = s;
    ll n = s.length();
    ll cnt = 1;
    ll ans = 0;
    ll total = 0;
    ll k = 0;
    for(ll bit = 0; bit < (1<<(n-1)); bit++){
        vector<ll> S;
        for(ll i = 0; i < n - 1; i++){
            if(bit & (1<<i)){
                S.push_back(i+1);
            }
        }

        // rep(i,S.size()){
        //     cout << "S: " << S[i] << " ";
        // }
        //cout << endl;
        rep(i,n){
            if(!find(S, i)){
                k = k*10 + ((int)s[i] - '0');
            }else{
                total += k;
                k = 0;
                k = k*10 + ((ll)s[i] - '0');
            }
            // cout << "k: " << k << endl;
        }
        total += k;
        ans += total;
        // cout << "ans: " << ans << " " << "total: " << total << endl;
        total = 0; k = 0;
    }
    ans += total;
    cout << ans << endl;
    return 0;
}