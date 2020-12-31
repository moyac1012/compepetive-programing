#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
int count(vector<vector<char>> c, int W, int H){
    int ans = 0;
    rep(i,H){
        rep(j,W){
            if(c[i][j] == '#') ans++;
        }
    }
    return ans;
}
int countb(vector<vector<char>> c, int h, int w, int H, int W){
    int ans = 0;
    rep(i,H){
        if(c[i][w] == '#') ans++;
    }
    rep(i,W){
        if(c[h][i] == '#') ans++;
    }
    if(c[h][w] == '#') ans--;
    return ans;
}

int main()
{
    int H,W,K;
    cin >> H >> W >> K;
    vector<vector<char>> c(H, vector<char>(W));
    rep(i,H){
        rep(j,W){
            cin >> c[i][j];
        }
    }
    int ans = 0;
    int j = 0;
    int num = count(c,W,H);
    int nums = 0;
    if(num == K) ans++;
    rep(i,H){
        rep(j,W){
            if(c[i][j] == '#') nums++;
        }
        if(num - nums == K) ans++;
        nums = 0;
    }

    rep(i,W){
        rep(j,H){
            if(c[j][i] == '#') nums++;
        }
        if(num - nums == K) ans++;
        nums = 0;
    }

    rep(i,H){
        rep(j,W){
            if(num-countb(c,i,j,H,W) == K) ans++;;
            cout << countb(c,i,j,H,W) << endl;
        }
    }

    cout << ans << endl;
    // rep(i,H){
    //     rep(j,W){
    //         cout << c[i][j];
    //     }
    //     cout << endl;
    // }
}