#include<bits/stdc++.h>
using namespace std;

int robbery(int i, int arr[])
{
    if (i == 0) return arr[0];
    if (i == 1) return max(arr[0], arr[1]);
    int prior1 = max(arr[0], arr[1]);
    int prior2 = arr[0];
    int current;
    for(int j=2;j<=i;j++)
    {
        int pick = arr[j] + prior2;
        int notPick = prior1;
        current = max(pick, notPick);
        prior2 = prior1;
        prior1 = current;
    }
    return current;
}

//Time Complexity: O(n)
//Space Complexity: O(1)
 
int main() {
   int n;
   cin >> n;
   int arr[n];
   for(int i=0;i<n;i++) cin >> arr[i];
   cout << robbery(n-1, arr);
  return 0;
}
