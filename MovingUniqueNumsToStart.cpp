#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int n)
{
    int tempIndex = 0;
    for(int i=0;i<=n-1;i++)
    {
        if (arr[i] != arr[tempIndex]) {
            tempIndex++;
            arr[tempIndex] = arr[i];
        }
    }
    for(int j = tempIndex+1; j <= n-1;j++)
    {
        arr[j] = 0;
    }
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin >> arr[i];
  }
 removeDuplicates(arr, n);
  for(int i=0;i< n;i++)
  {
      cout << arr[i] << " ";
  }
  return 0;
}
