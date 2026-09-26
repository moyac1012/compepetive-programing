#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N ;
    cin >> N;

    vector<int > a(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> a.at(i);
    }
    
    int Alice = 0,Bob = 0;

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for (size_t i = 0; i < N; i++)
    {
        Alice += a.at(i);
        i++;
        if(i < N){
            Bob += a.at(i);
        }
    }

    cout << Alice-Bob << endl;
    
}