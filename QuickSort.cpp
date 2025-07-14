#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) 
{
    int i = low;
    int j = high;
    while (i < j) {
        while (arr[i] <= arr[low] && i <= high-1) i++;
        while (arr[j] > arr[low] && j >= 1) j--;
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp; 
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int j = partition(arr, low, high);
        quickSort(arr, low, j-1);
        quickSort(arr, j+1, high);
    } 
}
 
int main() {
      int n;
      cin >> n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin >> arr[i];
      }
      quickSort(arr, 0, n-1);
      for(int i=0;i<n;i++)
      {
          cout << arr[i] << " ";
      }
      return 0;
}
