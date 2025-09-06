#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int limit, int m)
{
    int sum = limit;
    for(int i=0;i<=n-1;i++)
    {
        sum -= arr[i] / m;
        if (arr[i] % m != 0) 
        {
            sum--;
        }
        if (sum < 0) {
            return false;
        }
    }

    return true;
}

int findSmallestDivisor(int arr[], int n, int limit)
{
   int maxElement = *max_element(arr, arr+n);
   for(int i=1;i<=maxElement;i++)
   {
       if (isPossible(arr, n, limit, i)) {
           return i;
       }
   }
   return -1;
}
 
int main() {
  int arr[] = {9, 35, 19, 17, 7};
  int n = 5;
  int limit = 11;
  cout << findSmallestDivisor(arr, n, limit);
  return 0;
}
