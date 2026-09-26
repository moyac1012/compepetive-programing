#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int lenS = S.size();
    int a = 1;
  // ここにプログラムを追記
  for (int i = 0; i < lenS; i++)
  {
      /* code */
      if(S.at(i) == '+'){
        a += 1;
      }else if(S.at(i) == '-'){
        a -= 1;
      }else{

      }
  }
  cout << a << endl;
}
