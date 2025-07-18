#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int arr[] = {1, 2, 0, 0, 4, 0};
  int n = sizeof(arr)/sizeof(arr[0]);
  int j=0;
  for(int i=0;i<=n-1;i++) {
      if (arr[i] != 0) 
      {
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
          j++;
      }
  }
  for(int i=0;i<n;i++)
  {
      cout << arr[i] << " ";
  }
  return 0;
}
