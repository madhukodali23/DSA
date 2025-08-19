#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int ans = -1;
  for(int i=1;i<=n;i++)
  {
      if (i * i <= n)
      {
          ans = i;
      }
      else
      {
          break;
      }
  }
  cout << ans << endl;
  return 0;
}
