#include<bits/stdc++.h>
using namespace std;

long long power(int k, int n)
{
  long long result = 1;
  for(int i=1;i<=n;i++) result = result * k;
  return result;
}
 
int binarySearchToCalculateMPowerN(int n, int m) 
{
    int low = 1;
    int high = m;
    while (low <= high)
    {
        int mid = (low + high)/2;
        int x = power(mid, n);
        if (x == m)
        {
            return mid;
        }
        else if (x > m)
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
  cout << binarySearchToCalculateMPowerN(n, m);
  return 0;
}
