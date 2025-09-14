#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    int priori_1 = 0;
    int priori_2 = 1;
    int current;
    for(int i=2;i<=n;i++)
    {
        current = priori_1 + priori_2;
        priori_1 = priori_2;
        priori_2 = current;
    }
    return current;
    //0 1 1 2 3
}
 
int main() {
  int n;
  cin >> n;
  cout << fibonacci(n);
  return 0;
}

