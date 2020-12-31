ansusing namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    int n,t;
    cin >> n >> t;
    int ans = 0;
    vector<int> ti(n);
    rep(i,n){
        cin >> ti[i];
    }
    for(int i = 1; i < n; i++){
        if(ti[i-1]+t > ti[i]){
            total -= t - ti[i];
        }
    }
    cout << total << endl;

    return 0;
}