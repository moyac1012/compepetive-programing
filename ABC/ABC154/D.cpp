#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    cin >> N >> K;

    vector<int> p(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> p.at(i);
    }
    vector<double> E(N);
    for (size_t i = 0; i < N; i++)
    {
        if(p.at(i) == 1){
            E.at(i) = 1.0;
        }else{
            E.at(i) = (1.0 + p.at(i))/2;
        }
    }

    /*for (size_t i = 0; i < N; i++)
    {
        cout << E.at(i) << endl;
    }*/

    vector<double> total(N-K+1);
    for (size_t i = 0; i < N-K+1; i++)
    {
        for (size_t j = i; j < K+i; j++)
        {
            total.at(i) += E.at(j);
        }
        
    }
    
    
    sort(total.begin(), total.end());
    reverse(total.begin(), total.end());

    cout << total.at(0) << endl;

}
