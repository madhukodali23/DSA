#include<bits/stdc++.h>
using namespace std;

int countOnes(int arr[], int n) {
    int count = 0;
    for(int i=0;i<n;i++) {
        if (arr[i] == 1) {
            count++;
        }else {
            count = 0;
        }
    }
    return count;
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<=n-1;i++) {
      cin >> arr[i];
  }
  int result = countOnes(arr, n);
  cout << result << endl;
  return 0;
}
