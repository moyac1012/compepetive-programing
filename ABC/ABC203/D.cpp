#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    ll k,n;
    cin >> n >> k;
    vector<vector<ll>> a(n, vector<ll>(n));
    rep(i,n)rep(j,n) cin >> a[i][j];
    ll ans = 1e18;
    vector<ll> med00;
    for(int i = 0; i < n-k+1; i++){
        vector<ll> med;
        if(i == 0){
            for(int p = i; p < i+k; p++){
                for(int q = 0; q < k; q++){
                    med00.push_back(a[p][q]);
                }   
            }
            med = med00;
        }else{
            med = med00;
            for(int s = i; s < i+k; s++){
                med.push_back(a[r][s]);
            }
        }

        for(int r = k ; r < n; r++){
            vector<ll> orimed = med;
            sort(med.begin(), med.end(), greater<ll>());
            ll m = med[floor(k*k/2)];
            ans = min(m, ans);
            orimed.erase(orimed.begin(), orimed.begin()+k);
            med = orimed;
            for(int s = i; s < i+k; s++){
                med.push_back(a[r][s]);
            }
        }
        sort(med.begin(), med.end(), greater<ll>());
        ll m = med[floor(k*k/2)];
        ans = min(m, ans);
    }
    cout << ans << endl;
    return 0;
}