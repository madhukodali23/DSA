#include<bits/stdc++.h>
using namespace std;
 
int insertionSort(int n, int arr[]) 
{
        int count = 0;
        for(int i=1;i<=n-1;i++)
        {
            int j = i;
            while (arr[j-1] > arr[j] && j >= 1)
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                count++;
                j--;
            }
        }
        return count;
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin >> arr[i];
  }
  insertionSort( n, arr);
  for(int i=0;i<n;i++) {
    cout << arr[i] << " ";   
  }
  
  return 0;
}
