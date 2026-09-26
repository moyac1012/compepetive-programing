#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int S = 0, Ave;

  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
      cin >> A.at(i);
  }

  for (int  i = 0; i < N; i++)
  {
      S += A.at(i);
      Ave = S/N;
  }

  for (int i = 0; i < N; i++)
  {
      cout << abs(A.at(i) - Ave) << endl;
  }
  
  
  
}
