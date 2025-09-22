#include<bits/stdc++.h>
using namespace std;

int f(int heights[], int i, int k) 
{
    if (i == 0) return 0;
    int minimumEnergy = INT_MAX;
    int energy;
    for(int j=1;j<=k;j++)
    {
         if (i - j >= 0) 
         { 
         energy = abs(heights[i] - heights[i-j]) + f(heights, i-j, k);
         minimumEnergy = min(energy, minimumEnergy);
         }
    }
    return minimumEnergy;
}
 
int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for(int i=0;i<n;i++) 
  {
      cin >> arr[i];
  }
  cout << f(arr, n-1, k);
  return 0;
}
