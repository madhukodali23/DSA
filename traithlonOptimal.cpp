#include<bits/stdc++.h>
using namespace std;

int training(int n, int arr[][3])
{
    int prior[3];
    int current[3];
    prior[0] = arr[0][0];
    prior[1] = arr[0][1];
    prior[2] = arr[0][2];
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < 3; j++) 
        {
            current[j] = arr[i][j] + max (prior[(j+1)%3], prior[(j+2) %3]);
        }
        for(int j=0;j<3;j++)
        {
            prior[j] = current[j];
        }
    }
    return max(current[0], max(current[1], current[2]));
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
