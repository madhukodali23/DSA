#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[],int k, int n) {
    int i = k;
    int j = n-1;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void move_n_positions_left(int arr[], int n, int k)
{
    k = k % n;
    reverse_array(arr,0, k);
    reverse_array(arr, k, n);
    reverse_array(arr, 0, n);
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
