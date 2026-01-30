#include<bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>>arr)
{
    int m = arr.size();
    int n = arr[0].size();
    queue<pair<pair<int, int>, int>> q;
    int ans = -1;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if (arr[i][j] == 2) q.push({{i, j}, 0});
    
    while (!q.empty())
    {
            int length = q.size();
            pair<pair<int, int>, int> temp = q.front();
            int i = temp.first.first, j = temp.first.second, t = temp.second;
            ans = max(ans, t);
            if (i+1 < m  && arr[i+1][j] == 1)
            {
                q.push({{i+1, j}, t+1});
                arr[i+1][j] = 2;
            }
            if (i-1 >= 0  && arr[i-1][j] == 1)
            {
                q.push({{i-1, j}, t+1});
                arr[i-1][j] = 2;
            }
            if (j-1 >= 0 && arr[i][j-1] == 1)
            {
                q.push({{i, j-1}, t+1});
                arr[i][j-1] = 2;
            }
            if (j+1 < n && arr[i][j+1] == 1)
            {
                q.push({{i, j+1}, t+1});
                arr[i][j+1] = 2;
            }
            q.pop();
    }
    return ans;
}
 
int main() {
  int m, n;
  cin >> m >> n;
  vector<vector<int>>arr(m, vector<int>(n));
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin >> arr[i][j];
      }
  }
  cout << bfs(arr);
  return 0;
}
