#include<bits/stdc++.h>
using namespace std;

void firstAndLastOccurance(int arr[], int n, int target)
{
    int first = -1;
    int last = -1;
    for(int i=0;i<=n-1;i++)
    {
        if (arr[i] == target)
        {
            if (first == -1) first = i;
            else last = i;
        }
    }
    cout << first << " " << last; 
}
 
int main() {
  int n, target;
  cin >> n >> target;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  firstAndLastOccurance(arr, n, target);
  return 0;
}
