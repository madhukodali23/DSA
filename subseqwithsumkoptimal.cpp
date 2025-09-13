#include<bits/stdc++.h>
using namespace std;

void subsequences(int arr[], int n, int sum, vector<int>& v, int i, int k)
{
    if (i == n) {
        if (sum == k)
        {
            for(auto k: v)
            {
                cout << k << " ";
            }
            cout << endl;
        }
        return;
    }
    v.push_back(arr[i]);
    sum += arr[i];
    subsequences(arr, n, sum, v, i+1, k);
    v.pop_back();
    sum -= arr[i];
    subsequences(arr, n,sum,v, i+1, k);
}
 
int main() {
  int n = 5, i = 0, k = 16, sum = 0;
  int arr[] = {2, 8, 6, 4, 10};
  vector<int> v;
  subsequences(arr, n, sum, v, i, k);
  return 0;
}
