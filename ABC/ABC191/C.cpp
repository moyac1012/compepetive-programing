#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める
using Graph = vector<vector<int>>;

int main()
{
    int h,w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    rep(i,h) rep(j,w) cin >> s[i][j];
    int ans = 0;
    rep(i,h) rep(j,w){
        if(s[i][j] == '#'){
            int kado = 4;
            if(s[i+1][j] == '#' && s[i][j+1] == '#' || 
               s[i][j+1] == '#' && s[i-1][j] == '#' || 
               s[i-1][j] == '#' && s[i][j-1] == '#' || 
               s[i][j-1] == '#' && s[i+1][j] == '#') kado = 1;
            else if(s[i+1][j] == '#' ||
                    s[i-1][j] == '#' ||
                    s[i][j+1] == '#' ||
                    s[i][j-1] == '#') kado -= 2;

            if(s[i+1][j] == '#' && s[i-1][j] == '#') kado = 0;
            if(s[i][j+1] == '#' && s[i][j-1] == '#') kado = 0;


            kado = max(kado, 0);
            ans += kado;
            //cout << "kado: " << kado << "ans: " << ans << endl;
        }
    }
    cout << ans << endl;
    return 0;
}