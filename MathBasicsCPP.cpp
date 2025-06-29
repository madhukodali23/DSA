#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int i = 1;
  int n;
  cin >> n;

  vector<int> divisors;
  for(int i=1;i*i <= n;i++)
  {
      if (n % i == 0) {
          divisors.emplace_back(i);
          if (i != n/i) divisors.emplace_back(n/i);
      }
  }
  
  //O(srt(n))
  
  sort(divisors.begin(), divisors.end());
  
  //O(nlog(n))
  
  for(int i : divisors)
  {
      cout << i << " ";
  }
  
  //O(no of divisors)
  
  
  
  
  
 
  return 0;
}