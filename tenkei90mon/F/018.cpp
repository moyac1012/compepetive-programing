#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<typename T_n> void print_vec(vector<T_n> vec) { rep(i,vec.size()) cout << vec[i] << ' '; cout << endl; }
double pi = 3.14159265358979;

int main(){
    double t;
    cin >> t;
    double l,x,y;
    cin >> l >> x >> y;
    int q; cin >> q;
    rep(qi, q){
        double e; cin >> e;
        double th = (360*e)/t;
        double py = -l*sin(pi*th/180.0)/2, pz = (l/2)-(l*cos(pi*th/180.0)/2);
        //cout << pz << " " << py << endl;
        double a = sqrt((y-py)*(y-py) + x*x );
        printf("%.10lf\n",atan2(pz,a)*180/pi);
    }
    return 0;
}