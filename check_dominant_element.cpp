#include<bits/stdc++.h>
using namespace std;


bool check_dominant_element(int currIndex, int nextIndex, vector<int> &arr)
{
    int n = arr.size();
    for(int i = nextIndex; i < n; i++)
    {
        if (arr[currIndex] < arr[i])
        {
            return false;
        }
    }
    return true;
}
 
int main() {
    
  vector<int> arr = {2, 8, 7, 1, 3};
  int n = arr.size();
  vector<int> ans;
  for(int i = 0; i < n-1; i++)
  {
      if (check_dominant_element(i, i + 1, arr)) ans.push_back(arr[i]);
  }
  ans.push_back(arr[n-1]);
  
  
  for(int i = 0; i < ans.size(); i++)
  {
      cout << ans[i] << " ";
  }
  
  
  return 0;
}
