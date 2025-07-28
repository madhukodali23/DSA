#include<bits/stdc++.h>
using namespace std;

int countOnes(int arr[], int n) {
    int sum = 0;
    for(int i=0;i<=n-2;i++) {
        sum += arr[i];
    }
    int totalNumbersSum = (n*(n+1))/2;
    return totalNumbersSum - sum;
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<=n-1;i++) {
      cin >> arr[i];
  }
  
  cout << countOnes(arr, n);
  return 0;
}
