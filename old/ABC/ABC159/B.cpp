#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

bool hantei(string S){
    string Sr = S;
    reverse(Sr.begin(), Sr.end());
    if(S == Sr) return true;
    else return false;
}
int main()
{
    string S;
    cin >> S;
    int N = S.size();
    string Sr = S;
    reverse(Sr.begin(), Sr.end());
    string S3 = S.substr(0,(N-1)/2);
    string S3r = S3;
    reverse(S3r.begin(), S3r.end());
    string S6 = S.substr((N+3)/2-1);
    string S6r = S6;
    reverse(S6r.begin(), S6r.end());
    //cout << S3 << " " << S3r << " " << S6 << " " << S6r << endl;
    if(S == Sr && S3 == S3r && S6 == S6r){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}