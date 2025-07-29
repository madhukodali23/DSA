#include<bits/stdc++.h>
using namespace std;

void missingNumber(int arr[], int n) 
{
    int sum1 = (n * (n+1)) /2;
    int sum2 = 0;
    for(int i=0;i<=n-2;i++) sum2 += arr[i];
    cout <<  sum1 - sum2;
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<=n-2;i++) {
      cin >> arr[i];
  }
  missingNumber(arr, n);
   return 0;
}
