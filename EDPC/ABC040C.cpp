#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF 100000000

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    int N;
    cin >> N;

    vector<int> a(N);
    rep(i, N){ cin >> a.at(i);}

    vector<int> dp(N);
    rep(i, N){ dp.at(i) = INF;}
    dp.at(0) = 0;
    for(size_t i=1; i<N;i++){
        chmin(dp.at(i), dp.at(i-1)+abs(a.at(i) - a.at(i-1)));
        for (size_t i = 0; i < N; i++)
        {
            cout << dp.at(i) << " ";
        }
        cout << endl;
        if(i > 1 ) chmin(dp.at(i), dp.at(i-2)+abs(a.at(i) - a.at(i-2)));
        for (size_t i = 0; i < N; i++)
        {
            cout << dp.at(i) << " ";
        }
        cout << endl;
    }


    cout << dp.at(N-1) << endl;
}