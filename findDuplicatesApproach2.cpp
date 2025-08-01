#include<bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> arr = {4, 1, 3, 3, 2};
  sort(arr.begin(), arr.end());
  int n = arr.size();
  for(int i=1;i<=n-1;i++) 
  {
      if (arr[i] == arr[i-1]) {
          cout << arr[i];
          break;
      }
  }
  return 0;
}
