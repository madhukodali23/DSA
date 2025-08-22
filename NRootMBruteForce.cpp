#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
  bool isFound = false;
  for(int i=1;i<=m;i++)
  {
      if (pow(i, n) == m)
      {
          isFound = true;
          cout << i << endl;
          break;
      }
  }
  
  if (!isFound) {
      cout << -1;
  }
  
  return 0;
}
