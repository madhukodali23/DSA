#include<bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> arr = {4, 1, 3, 3, 2};
  unordered_map<int, int> mp;
  int n = arr.size();
  for(int i=0;i<=n-1;i++) {
      if (mp[arr[i]]++) {
          cout << arr[i];
          break;
      }
  }
  return 0;
}
