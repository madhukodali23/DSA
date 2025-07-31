#include<bits/stdc++.h>
using namespace std;


int findSingleElement(int arr[], int n) {
    for(int i=0;i<=n-1;i++) 
    {
        int count = 0;
        for(int j=0;j<=n-1;j++)
        {
            if (arr[i] == arr[j]) count++;
        }
        if (count == 1) return arr[i];
    }
    return -1;
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  cout << findSingleElement(arr, n);
  return 0;
}
