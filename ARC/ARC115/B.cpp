#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
void print(vector<vector<ll>> c){
    ll n = c.size();
    rep(i,n){
        rep(j,n){
            cout << c[i][j];
        }
        cout << endl;
    }
}

int main(){
    ll n;
    cin >> n;
    vector<vector<ll>> c(n, vector<ll>(n));
    vector<ll> dist(n-1);
    rep(i,n)rep(j,n) cin >> c[i][j];
    rep(i,n-1) dist[i] = c[0][i+1] - c[0][i];
    // rep(i,n-1) cout << dist[i] << endl;
    rep(i,n){
        rep(j,n-1){
            //cout << c[i][j+1] - c[i][j] << endl;
            if(c[i][j+1] - c[i][j] != dist[j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    ll minv = 1e10;
    ll minv_i = 1e10, minv_j = 1e10;
    rep(i,n){
        rep(j,n){
            if(minv > c[i][j]){
                minv = c[i][j];
                minv_i = i;
                minv_j = j;
            }
        }
    }
    vector<ll> a,b;
    rep(i,n){
        a.push_back(c[i][minv_j] - c[minv_i][minv_j]);
        b.push_back(c[minv_i][i]);
    }
    rep(i,n) cout << a[i] << " ";
    cout<< endl;
    rep(i,n) cout << b[i] << " ";
    cout << endl;
    return 0;
}