#include<bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> v1 = {4, 1, 3, 3, 2};
  int n = v1.size();
  for(int i=0;i<=n-1;i++) {
      for(int j=i+1;j<=n-1;j++) {
          if (v1[i] == v1[j]) {
              cout << v1[i];
              break;
          }
      }
  }
  return 0;
}
