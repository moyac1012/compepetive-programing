#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int ans = 0;
    vector<int> d(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> d.at(i);
    }
      
    sort(d.begin(), d.end());
    reverse(d.begin(), d.end());

    for (size_t i = 0; i < N; i++)
    {
        if(i != 0){
            if(d.at(i-1) == d.at(i)){
                continue;
            }
        }
        ans += 1;
    }

    cout << ans << endl;
    
}