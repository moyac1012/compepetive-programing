#include<iostream>
using namespace std;
int main()
{
    // 整数の入力
    int a, b;
    cin >> a >> b;
    
    if(a*b % 2 == 0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
}