#include<bits/stdc++.h>
using namespace std;

int climbing_stairs(int i)
{
    if (i == 1) return 1;
    if (i == 0) return 1;
    
    int left = climbing_stairs(i-1);
    int right = climbing_stairs(i-2);
    return left + right;
}
 
int main() {
  int n;
  cin >> n;
  cout << climbing_stairs(n);
  return 0;
}
