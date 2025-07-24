#include<bits/stdc++.h>
using namespace std;

void move_n_positions_left(int arr[], int n, int k)
{
   int temp[k];
   for(int i=0;i<=k-1;i++) temp[i] = arr[i];
   for(int i=k;i<=n-1;i++) arr[i-k] = arr[i];
   for(int i= n-k; i<=n-1;i++) arr[i] = temp[i-(n-k)];
}
 
int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  move_n_positions_left(arr, n, k);
  for(int i=0;i<=n-1;i++) cout << arr[i] << " ";
  return 0;
}
