#include<bits/stdc++.h>
using namespace std;
 
int power(int mid,int n, int m) {
    long long res = 1;
    for(int i=1;i<=n;i++)
    {
        res = res * mid;
        if (res > m) return 1;
    }
    if (res == m) return 0;
    else return -1;
} 

int binarySearchNRootM(int n, int m)
{
  int low = 1;
  int high = m;
  while (low <= high)
  {
      long long mid = (low + high)/2;
      if (power(mid, n, m) == 0)
      {
          return mid;
      }
      else if (power(mid, n, m) == 1)
      {
          high = mid - 1;
      }
      else
      {
          low = mid + 1;
      }
  }
  return -1;
}
 
int main() {
  int n, m;
  cin >> n >> m;
  cout << binarySearchNRootM(n, m);
  return 0;
}
