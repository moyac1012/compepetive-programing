#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    int d,h;
    cin >> n >> d >> h;
    vector<int> di(n), hi(n);
    rep(i,n) cin >> di[i] >> hi[i];
    vector<double> anskouho;
    bool f = false;
    rep(i,n){
        if(d*hi[i]-h*di[i] > 0){
            f = true;
        }
    }
    if(!f){
        cout << 0 << endl;
        return 0;
    }
    rep(i,n){
        f = true;
        //cout << di[i] << endl;
        rep(j,n){
            //cout << ((hi[j] - hi[i])*(d - di[i])) - ((h - hi[i])*(di[j] - di[i])) << endl;
            if(i == j) continue;
            if( ((hi[j] - hi[i])*(d - di[i])) - ((h - hi[i])*(di[j] - di[i])) > 0 ){
                f = false;
            }
        }
        if(f){
            double h2 = h ,d2 = d, h1 = hi[i], d1 = di[i];
            //cout << d1 << " " << h1 << " " << d2 << " " << h2 << " " << endl;
            anskouho.push_back(h1-(((h2-h1)/(d2-d1))*d1));
            //cout << h1-(((h2-h1)/(d2-d1))*d1) << endl;
        }   
    }

    double ans = 100000;
    rep(i, anskouho.size()){
        if(anskouho[i] < ans && anskouho[i] >= 0) ans = anskouho[i];
    }
    if(ans == 100000) ans = 0;
    printf("%.15lf\n", ans);

    return 0;
}