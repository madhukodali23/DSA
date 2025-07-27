#include<bits/stdc++.h>
using namespace std;

vector<int> get_intersection(int a[], int b[], int n, int m) {
    vector<int> ans;
    vector<int> temp(m, 0);
    for(int i=0;i<=n-1;i++) {
        for(int j=0;j<=m-1;j++) {
            if (a[i] == b[j] && temp[j] != 1) {
                ans.push_back(a[i]);
                temp[j] = 1;
                break;
            }
            
            else if (a[i] < b[j]) {
                break;
            }
        }
    }
    return ans;
}
 
int main() {
  int n, m;
  cin >> n >> m;
  int a[n], b[m];
  
  for(int i=0;i<=n-1;i++) {
      cin >> a[i];
  }
  
  for(int i=0;i<=m-1;i++) {
      cin >> b[i];
  } 
  
 vector<int> result = get_intersection(a, b, n, m);
 for(int k : result) cout << k << " ";
  return 0;
}
