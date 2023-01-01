#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Y;
    cin >> N >> Y;
    int yukiti = -1, higuti = -1, noguti = -1;
    for (size_t i = 0; i <= N; i++)
    {
        for (size_t j = 0; i + j <= N; j++)
        {
            if(10000*i+5000*j+1000*(N-i-j) == Y){
                yukiti = i;
                higuti = j;
                noguti = N-i-j;
            }   
        }
        
    }

    cout << yukiti <<" " << higuti <<" " << noguti << endl;
    
}