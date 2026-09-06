#include<bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> arr =  {3, 2, 1};
  int n = arr.size();
  int reqNumIndex;
  for(int i = n-2; i >= 0; i--)
  {
      if (arr[i] < arr[i+1])
      {
          reqNumIndex = i;
          break;
      }
  }
  for(int i = n-1 ; i >= 0; i--)
  {
      if (arr[i] > arr[reqNumIndex]) 
      {
          swap(arr[i], arr[reqNumIndex]);
          break;
      }
  }
  
 
 int i = reqNumIndex + 1;
 int j = arr.size() - 1;
 
 
 reverse(arr.begin() + reqNumIndex, arr.end());
 
 for(int i = 0; i < n; i++)
 {
     cout << arr[i];
     if (i < n-1) cout << ",";
 }

  return 0;
}
