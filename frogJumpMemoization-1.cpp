#include<bits/stdc++.h>
using namespace std;


int memoizationForFrogJump(int i, int heights[], vector<int> &v)
{
   if (i == 0) return 0;
   if (i == 1) return abs(heights[i] - heights[i-1]);
   if (v[i] != -1) return v[i];
   int s1 = abs(heights[i] - heights[i-1]) + memoizationForFrogJump(i-1, heights, v);
   int s2 = abs (heights[i] - heights[i-2]) + memoizationForFrogJump(i-2, heights, v);
   v[i] = min(s1, s2);
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
