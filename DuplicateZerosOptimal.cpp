#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void duplicateZeros(vector<int>& arr) {
       int n = arr.size();
       int j = 0;
       int temp[n];
       for(int i=0;i<=n-1;i++)
       {
           if (arr[i] == 0 && j < n)
           {
              if (j < n) {
                  temp[j] = 0;
                  j++;
              }
              if (j < n) 
              {
                  temp[j] = 0;
                  j++;
              }
           }
           else
           {
               if (j < n)
               {
                   temp[j] = arr[i];
                   j++;
               }
           }
       }
       for(int i=0;i<=n-1;i++) arr[i] = temp[i];
    }
};
