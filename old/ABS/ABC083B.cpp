#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,A,B;
    cin >> N >> A >> B;
    int ans = 0;
    for (int  i = 1; i < N+1; i++)
    {
        if( (i%10 + i/10%10 + i/100%10 + i/1000%10 + i/10000%10) >= A && (i%10 + i/10%10 + i/100%10 + i/1000%10 + i/10000%10) <= B){
            ans+= i;
        }
    }
    
    cout << ans << endl;
}