#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int num_rev(int N){
    int reverse = 0;
    while (N > 0) {
        reverse = reverse * 10 + N % 10;
        N /= 10;
    }
    return reverse;
}

int last(int N){
    int last = 0;
    last = N % 10;
    return last;
}

int first(int N){
    int first = 0;
    while (N > 0) {
        first = N % 10;
        N /= 10;
    }
    return first;
}

unsigned GetDigit(unsigned num){
    unsigned digit=0;
    while(num!=0){
        num /= 10;
        digit++;
    }
    return digit;
}

int fact(int N){
    int ans = 1;
    for (size_t i = 1; i <= N; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int Par(int n, int r){
    return fact(n)/fact(n-r);
}

int Con(int n, int r){
    return Par(n, r)/fact(r);
}

int main()
{
    int N;
    cin >> N;
    int ans = 0;
    vector<vector<int>> C(10,vector<int>(10));
    for (size_t i = 1; i <= N; i++)
    {
        C[first(i)][last(i)]++;

    }

    for (size_t i = 1; i <= 9; i++)
    {
        for (size_t j = 1; j <= 9; j++)
        {
            ans += C[i][j] * C[j][i];
        }
        
    }
    cout << ans << endl;
}