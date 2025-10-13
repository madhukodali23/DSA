#include<bits/stdc++.h>
using namespace std;

int f(int i, int sport, int points[][3])
{
    if (i < 0) 
    {
        return 0;
    }
   return points[i][sport] + max(f(i-1, (sport+1)%3, points), f(i-1, (sport+2)%3, points));
}

int training(int n, int points[][3])
{
    int a = f(n-1, 0, points);
    int b = f(n-1, 1, points);
    int c = f(n-1, 2, points);
    return max(a, max(b, c));
}
 
int main() {
  int n;
  cin >> n;
  int arr[n][3];
  for(int i=0;i<n;i++) 
  {
      for(int j=0;j<3;j++)
      {
          cin >> arr[i][j];
      }
  }
  
  cout << training(n, arr);
  return 0;
}
