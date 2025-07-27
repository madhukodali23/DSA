#include<bits/stdc++.h>
using namespace std;

vector<int> squareAndSortArray(int arr[], int n) {
    int left = 0, right= n-1;
    vector<int> temp(n);
    for(int i=n-1;i>=0;i--) {
        if (abs(arr[left]) > abs(arr[right])) {
            temp[i] = arr[left] * arr[left];
            left++;
        }
        else {
            temp[i] = arr[right] * arr[right];
            right--;
        }
    }
    return temp;
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<=n-1;i++) {
     cin >> arr[i];
  }
  vector<int> result = squareAndSortArray(arr, n);
  for(int i=0;i<=n-1;i++) cout << result[i] << " ";
  return 0;
}
