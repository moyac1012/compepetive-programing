#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int len = S.size();
    bool flag = true, flag2 = false;

    vector<string>  daydream= {"dream", "dreamer", "erase", "eraser"};

    reverse(S.begin(), S.end());

    for(size_t i=0;i<4;i++) {
        reverse(daydream.at(i).begin(), daydream.at(i).end());
    }

    for (size_t i = 0; i < len;)
    {
        flag2 = false;
        for (size_t j = 0; j < 4; j++)
        {
            string d = daydream.at(j);
            if(S.substr(i, d.size()) == d){
                flag2 = true;
                i += d.size();
            }
        }

        if(!flag2){
            flag = false;
            break;
        }
        
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}