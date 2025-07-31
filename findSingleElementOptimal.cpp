#include<bits/stdc++.h>
using namespace std;

int findSingleElement(int arr[], int n) {
    int ans = 0;
    for(int i=0;i<=n-1;i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  cout << countOnes(arr, n);
  return 0;
}
