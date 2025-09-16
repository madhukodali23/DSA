#include<bits/stdc++.h>
using namespace std;

int climbing_stairs(int n)
{
    if (n == 1) return 1;
    if (n == 0) return 1;
    int left = 1;
    int right = 1;
    int current = 0;
    for(int i=2;i<=n;i++)
    {
        current = left + right;
        left = right;
        right = current;
    }
    return current;
}
 
int main() {
  int n;
  cin >> n;
  vector<int> dp(n+1, -1);
  cout << climbing_stairs(n);
  return 0;
}
