#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int i = 1;
  int n;
  cin >> n;
//By Using Vectors
  vector<int> divisors;
  for(int i=1;i*i <= n;i++)
  {
      if (n % i == 0) {
          divisors.emplace_back(i);
          if (i != n/i) divisors.emplace_back(n/i);
      }
  }
  if (divisors.size() == 2) {
      cout << "Prime" << endl;
  }else {
      cout << "Not a Prime" << endl;
  }


//By Using Count Variable
int count = 0;
  for(int i=1;i*i<=n;i++)
  {
      if (n % i == 0) {
          count++;
          if (i != n/i) count++;
      }
  }
 if (count == 2)
 {
     cout << "Prime" << endl;
 }else {
     cout << "Not a Prime" << endl;
 }
 

  return 0;
}