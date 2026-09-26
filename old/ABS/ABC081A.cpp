#include<iostream>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int ans = 0;
    if(S.at(0) == '1') ans++;
    if(S.at(1) == '1') ans++;
    if(S.at(2) == '1') ans++;

    cout << ans << endl;
    
}