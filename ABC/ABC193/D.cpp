#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
ll culc_score(vector<ll> cnt){
    int n = cnt.size();
    int score = 0;
    Rep(i,1,n){
        score += i * pow(10, cnt[i]);
    }
    return score;
}

int main(){
    ll k; cin >> k;
    string s,t;
    cin >> s >> t;
    vector<ll> cnts(10), cntt(10);
    rep(i,4){
        cnts[s[i] - '0']++;
        cntt[t[i] - '0']++;
    }
    // Rep(i,1,10) cout << cnts[i] << " ";
    // cout << endl;
    // Rep(i,1,10) cout << cntt[i] << " ";
    // cout << endl;
    
    vector<ll> x;
    Rep(i,1,10) rep(j,k-cnts[i]-cntt[i]) x.push_back(i);
    // rep(i,x.size()) cout << x[i] << " ";
    // cout << endl;
    ll n = x.size()*(x.size()-1)/2;
    ll ac = 0;
    vector<ll> cntx(10);
    rep(i,x.size()) cntx[x[i]]++;
    // rep(i,x.size()) cout << x[i] << " ";
    // cout << endl;
    // Rep(i,1,x.size()) cout << cntx[i] << " ";
    // cout << endl;
    vector<vector<int>> f(10, vector<int>(10));
    Rep(i,1,10){
        Rep(j,1,10){
            cnts[i]++; cntt[j]++;
            ll s_score = culc_score(cnts);
            ll t_score = culc_score(cntt);
            // cout << i << " " << j << endl;
            // cout << s_score << " " << t_score << endl;
            if(s_score > t_score) {
                f[i][j]++;
            }
            cnts[i]--; cntt[j]--;
        }
    }

    // Rep(i,1,10){
    //     Rep(j,1,10){
    //         cout << f[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    Rep(i,1,f.size()){
        Rep(j,1,f[0].size()){
            if(f[i][j] == 1){
                if(i == j && cntx[i] != 0){
                    ac += cntx[i]*(cntx[i]-1);
                }else if(i != j && (cntx[i] != 0 || cntx[j] != 0)){
                    ac += cntx[i]*cntx[j];
                }
            }
        }
    }
    ac /= 2;
    //cout << ac << " "<<  n << endl;
    printf("%.15lf\n", (double)ac/(double)n);
    return 0;
}