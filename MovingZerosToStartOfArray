#include<bits/stdc++.h>
using namespace std;

 void moveZerosToFront(int arr[], int n){
        int j = n-1;
        for(int i=n-1;i >= 0;i--)
        {
            if (arr[i] != 0) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j--;
            }
        }
    }
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];
  moveZerosToFront(arr, n);
  for(int i=0;i<=n-1;i++) cout << arr[i] << " ";
  return 0;
}
