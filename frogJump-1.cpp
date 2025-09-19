#include<bits/stdc++.h>
using namespace std;

int f(int i, int heights[]) {
    if (i == 0) return 0;
    
    if (i == 1) return abs(heights[1]-heights[0]);
    
    int s1 = abs(heights[i]- heights[i-1]) + f(i-1, heights);
    int s2 = abs(heights[i]- heights[i-2]) + f(i-2, heights);
    return min(s1, s2);
}
 
int main() {
  int n;
  cin >> n;
  int heights[n];
  for(int i=0;i<n;i++) cin >> heights[i];
  cout << f(n-1, heights);
  return 0;
}
