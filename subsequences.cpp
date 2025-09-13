#include<bits/stdc++.h>
using namespace std;

void subsequences(int arr[], int n, vector<int> v, int i)
{
    if (i == n) {
        for(auto k : v) {
            cout << k << " ";
        }
        cout << endl;
        return;
    }
    v.push_back(arr[i]);
    subsequences(arr, n, v, i+1);
    v.pop_back();
    subsequences(arr, n, v, i+1);
}
 
int main() {
  int n = 3, i = 0;
  int arr[] = {4, 5, 6};
  vector<int> v;
  subsequences(arr, n, v, i);
  return 0;
}
