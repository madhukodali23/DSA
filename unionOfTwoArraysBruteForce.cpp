#include<bits/stdc++.h>
using namespace std;

vector<int> get_union(vector<int> a, vector<int> b,int n,int m) {
    set<int> s;
    vector<int> v;
    for(int i=0;i<n;i++) s.insert(a[i]);
    for(int i=0;i<m;i++) s.insert(b[i]);
    for(auto k : s) v.push_back(k);
    return v;
}
 
int main() {
  int n;
  int m;
  cin >> n >> m;
  vector<int> a, b;
  int x;
  for(int i=0;i<n;i++) {
      cin >> x;
      a.push_back(x);
  }
  for(int i=0;i<n;i++) {
      cin >> x;
      b.push_back(x);
  }
  vector<int> result = get_union(a, b, n, m);
  for(int c : result) cout << c << " ";
  return 0;
}
