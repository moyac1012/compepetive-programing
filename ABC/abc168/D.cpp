#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int n,m;
    cin >> n >> m;
    Graph G(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    queue<int> q;
    vector<int> arrow(n,-1);
    q.push(0);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int nv : G[v]){
            if(arrow[nv] != -1) continue;
            q.push(nv);
            arrow[nv] = v;
        }
    }
    Rep(i,1,arrow.size()){
        if(arrow[i] == -1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    Rep(i,1,n){
        cout << arrow[i] + 1 << endl;
    }
    return 0;
}