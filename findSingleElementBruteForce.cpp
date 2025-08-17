#include<bits/stdc++.h>
using namespace std;

int findSingleElement(int arr[],int n)
{ 
    if (n == 1)
    {
        return arr[0];
    }
    else if (arr[0] != arr[1])
    {
        return arr[0];
    }
    
    else if (arr[n-1] != arr[n-2])
    {
        return arr[n-1];
    }
    
    for(int i=1;i<=n-2;i++)
    {
        if (arr[i] != arr[i+1] && arr[i] != arr[i-1])
        {
            return arr[i];
        }
    }
    return -1;
}


int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];
  cout << findSingleElement(arr, n);
  return 0;
}
