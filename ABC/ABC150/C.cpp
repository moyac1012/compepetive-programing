#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll Fact(ll n){
    ll ans = 1;
    for (size_t i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int N;
    cin >> N;
    vector<int> P(N),Q(N);
    rep(i,N) cin >> P[i];
    rep(i,N) cin >> Q[i];
    vector<vector<int>> perm(N,vector<int>(Fact(N)));
    vector<int> v(N);
    iota(v.begin(), v.end(),1);
    int j = 0;
    do{
        for (size_t i = 0; i < N; i++)
        {
            perm[i][j] = v[i];
            //cout << perm[i][j] << " ";
        }
        //cout << endl;
        j++;
    }while(next_permutation(v.begin(),v.end()));
    int Pt=0,Qt=0;
    
    cout << abs(Pt-Qt) << endl;

}