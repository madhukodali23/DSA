#include<bits/stdc++.h>
using namespace std;

int robbery(int i, int arr[])
{
    if (i == 0) return arr[0];
    if (i == 1) return max(arr[0], arr[1]);
     int pick = arr[i] + robbery(i-2, arr);
     int notPick = robbery(i-1, arr);
     return max(pick, notPick);
}
 
int main() {
   int n;
   cin >> n;
   int arr[n];
   for(int i=0;i<n;i++) cin >> arr[i];
   cout << robbery(n-1, arr);
  return 0;
}
