#include<bits/stdc++.h>
using namespace std;


int f(int m, int n)
{
    vector<int> prior(n, 1);
    vector<int> current(n);
    current[0] = 1;
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            current[j] = prior[j] + current[j-1];
        }
        for(int j=0;j<n;j++)
        {
            prior[j] = current[j];
        }
    }
    return current[n-1];
}
 
int main() {
  int m, n;
  cin >> m >> n;
  cout << f(m, n);
  return 0;
}
