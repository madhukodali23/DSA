#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  
  for(int i=0;i<n;i++) cin >> arr[i];

  int ans[n];
  
  int left = 0;
  int right = n-1;
  int index = n-1;
  while (left <= right)
  {
      int rightVal = arr[right] * arr[right];
      int leftVal = arr[left] * arr[left];
      if (rightVal > leftVal)
      {
          ans[index] = rightVal;
          right--;
      }
      else
      {
          ans[index] = leftVal;
          left++;
      }
      index--;
  }
  
  
  for(int i=0;i<n;i++)
  {
      cout << ans[i] << " ";
  }
  
  return 0;
}
