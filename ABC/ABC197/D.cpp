#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
double pi = 3.14159665358979;

int main(){
    int n; cin >> n;
    double x,y,x2,y2;
    cin >> x >> y >> x2 >> y2;
    complex<double> z(x, y), z2(x2, y2);
    double a = 2*pi/n;
    //cout << a << endl;
    complex<double> d((x+x2)/2, (y+y2)/2);
    z -= d;
    complex<double> f(cos(a), sin(a));
    complex<double> ans = z*f;
    ans += d;
    //cout << ans.real() << " " << ans.imag() << endl;
    printf("%.12lf %.12lf\n", ans.real(), ans.imag());

    return 0;
}