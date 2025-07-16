#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondLargestElement(int arr[], int n){
        int firstLargest = arr[0];
        int secondLargest = -1;
        for(int i=1;i<=n-1;i++)
        {
            if (arr[i] > firstLargest) 
            {
                secondLargest = firstLargest;
                firstLargest  = arr[i];
            }
            if (arr[i] > secondLargest && arr[i] < firstLargest)
            {
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
};
