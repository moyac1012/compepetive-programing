#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> X(N),Y(N),T(N);

    for (size_t i = 0; i < N; i++)
    {
        cin >> T.at(i) >> X.at(i) >> Y.at(i);
    }

    int cx = 0, cy = 0, ct = 0;
    bool can = true;
    for (size_t i = 0; i < N; i++)
    {
        int xrange = abs(cx - X.at(i));
        int yrange = abs(cy - Y.at(i));
        int range = xrange + yrange;
        int dt = T.at(i) - ct;
        if(dt < range){
           can = false; 
           break;
        } 
        
        if((dt -range) % 2 == 1){
            can = false;
            break;
        }

        cx = X.at(i);
        cy = Y.at(i);
        ct = T.at(i);
    }
    
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}