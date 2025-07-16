#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[], int n)
{
    sort(arr, arr+n);
    int secondLargest = -1;
    for(int i = n-1;i>=0;i--)
    {
        if (arr[i] != arr[n-1])
        {
            secondLargest = arr[i];
            return secondLargest;
        }
    }
    return 0;
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<=n-1;i++)
  {
      cin >> arr[i];
  }
  cout << secondLargestElement(arr, n);
  return 0;
}
