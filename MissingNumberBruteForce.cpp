#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0;i <= n-1;i++) cin >> arr[i];
  for(int i=1;i<=n;i++) 
  {
        bool isFound = false;
         for(int j=0;j<=n-2;j++) 
         {
                 if (i == arr[j]) 
                 {
                     isFound = true;
                 } 
        }
        if (!isFound) {
            cout << i << " ";
        }
     }
  return 0;
}
