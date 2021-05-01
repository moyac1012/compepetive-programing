#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const double pi2 = 9.86960440109;

int main(){
    double r,d;
    cin >> r >> d;
    printf("%.10lf\n", r*r*d*2*pi2);
    return 0;
}