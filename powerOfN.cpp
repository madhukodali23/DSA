#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int findNthrootofM (int n, int m){
        int low = 0;
        int high = m;
        while (low <= high)
        {
            long long mid = (low + high)/2;
            if (pow(mid, n) == m)
            {
                return mid;
            }
            else if (pow(mid, n) > m)
            {
                high = mid - 1;
            }
            else 
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};
