#include<bits/stdc++.h>
using namespace std;

void missingNumber(int arr[], int n) 
{
    int temp[n+1] = {0};
    for(int i=0;i<=n-2;i++) {
        temp[arr[i]] = 1; 
    }
    
    for(int i=1;i<=n;i++) {
        if (temp[i] != 1) {
            cout << i << endl;
            break;
        }
    }
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
