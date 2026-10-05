#include<bits/stdc++.h>
using namespace std;



int main() {
    
  vector<int> arr = {2, 8, 7, 1, 3};
  int n = arr.size();
  int max = INT_MIN;
  vector<int> ans;
  
  for(int i = n-1; i >= 0; i--)
  {
      if (arr[i] >= max)
      {
          ans.push_back(arr[i]);
          max = arr[i];
      }
  }
  
  reverse(ans.begin(), ans.end());
  
  for(int i = 0; i < ans.size(); i++)
  {
      cout << ans[i] << " ";
  }
  
  
  return 0;
}
