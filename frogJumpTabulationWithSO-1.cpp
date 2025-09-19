#include<bits/stdc++.h>
using namespace std;

int tabulationWithSpaceOptimizationFrogJump(int i, int heights[])
{
   int prior_2 = 0;
   int prior_1 = abs(heights[i]-heights[i-1]);
   int current = 0;
   for(int j=2;j<=i;j++)
   {
       int s1 = abs(heights[j]-heights[j-1]) + prior_1;
       int s2 = abs(heights[j]-heights[j-2]) + prior_2;
        current = min(s1, s2);
        prior_2 = prior_1;
        prior_1 = current;
   }
   return current;
}
 
int main() {
  int n;
  cin >> n;
  int heights[n];
  for(int i=0;i<n;i++) cin >> heights[i];
  cout << tabulationWithSpaceOptimizationFrogJump(n-1, heights);
  return 0;
}
