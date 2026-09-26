#include <bits/stdc++.h>
#include <atcoder/all>
#include <cstdio>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,m;
    cin >> n >> m;

    scc_graph g(n);

    rep(i,m){
        int u,v;
        cin >> u >> v;
        u--; v--;
        g.add_edge(u, v);
        g.add_edge(v, u);
    }

    auto scc = g.scc();

    if(int(scc.size()) == 0) cout << int(scc.size()) << endl;
    else cout << int(scc.size())-1 << endl;

    return 0;
}