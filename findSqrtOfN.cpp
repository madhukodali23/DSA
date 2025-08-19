#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int findSqrtOfN(int n){
         int low = 1;
         int high = pow(10, 9);
         while (low <= high)
         {
             long long mid = low + (high-low)/2;
             long long res = mid * mid;
             if ( res == n)
             {
                 return mid;
             }
             else if (res > n) {
                 high = mid - 1;
             }
             else {
                 low = mid + 1;
             }
         }
         return high;
    }
};
