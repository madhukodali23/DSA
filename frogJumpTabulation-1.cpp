#include<bits/stdc++.h>
using namespace std;

int tabulationForFrogJump(int i, int heights[], vector<int> &v)
{
   v[0] = 0;
   v[1] = abs(heights[i] - heights[i-1]);
   for(int j=2;j<=i;j++)
   {
       int s1 = abs(heights[j]-heights[j-1]) + v[j-1];
       int s2 = abs(heights[j]-heights[j-2]) + v[j-2];
       v[j] = min(s1, s2);
   }
   return v[i];
}
 
int main() {
  int n;
  cin >> n;
  int heights[n];
  vector<int> v(n, -1);
  for(int i=0;i<n;i++) cin >> heights[i];
  cout << memoizationForFrogJump(n-1, heights, v);
  return 0;
}
