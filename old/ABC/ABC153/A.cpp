#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int H, A;
    cin >> H >> A;
    int count = 0;
    while(H>0){
        H -= A;
        count += 1;
    }
    cout << count << endl;
}  