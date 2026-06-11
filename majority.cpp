#include<bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> arr = {5, 5, 2, 5, 4, 7, 4, 5, 5, 5};
  int n = arr.size();
  int leader = arr[0];
  int majority = 1;
  for (int i = 1; i < n; i++)
  {
      if (arr[i] == leader)
      {
          majority++;
      }
      else {
          majority--;
      }
      if (majority == 0)
      {
          leader = arr[i];
          majority = 1;
      }
  }
  cout << leader << endl;
  return 0;
}
