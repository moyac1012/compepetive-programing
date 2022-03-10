#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n;
    cin >> n;
    set<string> color;
    int free = 0;
    rep(i,n){
        int c;
        cin >> c;
        if(1 <= c && c <= 399) color.insert("hai");
        else if(400 <= c && c <= 799) color.insert("tya");
        else if(800 <= c && c <= 1199) color.insert("midori");
        else if(1200 <= c && c <= 1599) color.insert("mizu");
        else if(1600 <= c && c <= 1999) color.insert("ao");
        else if(2000 <= c && c <= 2399) color.insert("ki");
        else if(2400 <= c && c <= 2799) color.insert("orenji");
        else if(2800 <= c && c <= 3199) color.insert("aka");
        else free++;
    }
    if(color.size() == 0) {
        cout << 1 << " " << free << endl;;
        return 0;
    }
    int maxcolors = free + color.size();
    cout << color.size() << " " << maxcolors << endl;

    return  0;
}