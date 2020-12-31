#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    set<char> yahoo, ans;
    yahoo.insert('y');
    yahoo.insert('a');
    yahoo.insert('h');
    yahoo.insert('o');
    yahoo.insert('o');
    rep(i,5){
        char a;
        cin >> a;
        ans.insert(a);
    }
    if(yahoo == ans) cout << "YES"<< endl;
    else cout << "NO" << endl;
    return 0;
}