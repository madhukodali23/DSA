#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int n)
{
    set<int> s;
    for(int i=0;i<n;i++) {
        s.insert(arr[i]);
    }
    int j = 0;
    for(auto k : s) {
        arr[j] = k;
        j++;
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
 removeDuplicates(arr, n);
  for(int i=0;i< n;i++)
  {
      cout << arr[i] << " ";
  }
  return 0;
}
