#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void arrangeColorsInOrder(vector<int>& arr) {
        int n = arr.size();
        int low = 0, mid = 0, high = n-1;
        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                swap(arr[mid], arr[low]);
                mid++;
                low++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else 
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};
