#include<bits/stdc++.h>
using namespace std;
 
 int houseRobbingII(int i, vector<int> arr) 
 {
     if (i == 0) return arr[0];
     if (i == 1) return max(arr[0], arr[1]);
     int prior2 = arr[0];
     int prior1 = max(arr[0], arr[1]);
     for(int j=2;j<=i;j++)
     {
         int pick = arr[j] + prior2;
         int notPick = prior1;
         int current = max(pick, notPick);
         prior2 = prior1;
         prior1 = current;
     }
     return prior1;
 }
 
int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  vector<int> v1(n);
  vector<int> v2(n);
  for(int i=0;i<n;i++) cin >> arr[i];
  for(int i=0;i<n-1;i++) 
  {
    v1[i] = arr[i];
    v2[i] = arr[i+1];
  }
  int x = houseRobbingII(n-2, v1);
  int y = houseRobbingII(n-2, v2);
  cout << max(x, y);
  return 0;
}
