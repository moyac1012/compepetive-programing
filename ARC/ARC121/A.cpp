    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    #define rep(i,n) for(int i = 0; i < (int)(n); i++)
    #define Rep(i,j,n) for(int i = j; i < (int)(n); i++)
    using Graph = vector<vector<int>>;
    const int dx[4] = {1, 0, -1, 0};
    const int dy[4] = {0, 1, 0, -1};

    int main(){
        int n; cin >> n;
        vector<pair<int,int>> x(n), y(n);
        rep(i,n) cin >> x[i].first >> y[i].first;
        rep(i,n){
            x[i].second = i;
            y[i].second = i;
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        int ans = max(max(abs(x[1].first - x[n-1].first), abs(x[0].first - x[n-2].first)), max(abs(y[1].first - y[n-1].first), abs(y[0].first - y[n-2].first )));
        if(x[n-1].second == y[n-1].second && x[0].second == y[0].second){
            cout << ans << endl;
        }else{
            cout << max( min(abs(x[n-1].first - x[0].first), abs(y[n-1].first - y[0].first)),ans)  << endl;
        }

        return 0;

    }