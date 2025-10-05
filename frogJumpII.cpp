#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int houseRob(int i, vector<int> arr) {
      if (i == 1) return max(arr[0], arr[1]);
      
      if (i == 0) return arr[0];
      
      int pick = houseRob(i-2, arr) + arr[i];
      int notPick = houseRob(i-1, arr);
      
      return max(pick, notPick);
    }
    
    int maxAmount(int n, int arr[]){
        vector<int> v1;
        vector<int> v2;
       for(int i=0;i<n-1;i++) {
           v1.push_back(arr[i]);
       }
       
       for(int i=1;i<n;i++) {
           v2.push_back(arr[i]);
       }
       
       int x = houseRob(v1.size()-1, v1);
       int y = houseRob(v2.size()-1, v2);
       
       return max(x, y);
    }
};
