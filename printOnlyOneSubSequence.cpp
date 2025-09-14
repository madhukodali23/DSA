#include<bits/stdc++.h>
using namespace std;


bool print_subsequence(int arr[], int n, int k, int i, vector<int> v, int sum)
{
    if (i >= n)
    {
        if (sum == k)
        {
            for(auto s : v)
            {
                cout << s << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }
    
    v.push_back(arr[i]);
    sum += arr[i];
    if (print_subsequence(arr, n, k, i+1, v, sum) == true) return true;
    
    v.pop_back();
    sum -= arr[i];
    if (print_subsequence(arr, n, k, i+1, v, sum) == true) return true;
    
    return false;
}
 
int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  vector<int> v;
  for(int i=0;i<n;i++)
  {
      cin >> arr[i];
  }
  print_subsequence(arr, n, k, 0, v, 0);
  return 0;
}
