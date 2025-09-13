#include<bits/stdc++.h>
using namespace std;

void subsequences(int arr[], int n, vector<int>& v, int i, int k)
{
    if (i == n) {
        int sum = 0;
        for(auto k : v) {
            sum += k;
        }
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
    subsequences(arr, n, v, i+1, k);
    v.pop_back();
    subsequences(arr, n, v, i+1, k);
}
 
int main() {
  int n = 5, i = 0, k = 16;
  int arr[] = {2, 8, 6, 4, 10};
  vector<int> v;
  subsequences(arr, n, v, i, k);
  return 0;
}
