#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<int> An(N);
    bool odd_flag = false;
    int ans = 0;
    for (int  i = 0; i < N; i++)
    {
        /* code */
        cin >> An.at(i);
    }
    
    while(odd_flag == false){

        for (int  i = 0; i < N; i++)
        {
            if(An.at(i)%2 == 1){
                odd_flag = true;
            }
        }

        if(odd_flag == false){
            for (int i = 0; i < N; i++)
            {
                An.at(i) /= 2;            
            }
            ans++;
        }
    }

    cout << ans << endl;
}