#include<bits/stdc++.h>
using namespace std;
int isPossible(int arr[], int n, int h, int m)
{
    int hoursCount = 0;
    for(int i=0;i<n;i++)
    {
        int num = arr[i];
        hoursCount += ceil(num/m);
    }
   if (hoursCount <= h) {
       return true;
   }
   else {
       return false;
   }
}

int monkeyEatingTime(int arr[], int n, int h)
{
    int maximum = INT_MIN;
    for(int i=0;i<=n-1;i++)
    {
        maximum = max(maximum, arr[i]);
    }
    for(int i=1;i<=maximum;i++)
    {
        if (isPossible(arr, n, h, i))
        {
            return i;
        }
    }
    return -1;
}

 
int main() { 
  int n = 3, arr[] = {3, 6, 9};
  int h = 6;
  cout << monkeyEatingTime(arr, n, h);
  return 0;
}
