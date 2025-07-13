#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void merge(int arr[], int left, int mid, int right)
    {
        int n = right - left + 1;
        int newArr[n];
        int i = left;
        int j = mid+1;
        int k = 0;
        while (i <= mid && j <= right)
        {
            if (arr[i] < arr[j])
            {
                newArr[k] = arr[i];
                k++;
                i++;
            }
            else 
            {
                newArr[k] = arr[j];
                k++;
                j++;
            }
        }
        
        while (i <= mid) {
            newArr[k] = arr[i];
            k++;
            i++;
        }
        
        while (j <= right)
        {
            newArr[k] = arr[j];
            k++;
            j++;
        }
        
        for(int c=0;c<=n-1;c++)
        {
            arr[left + c] = newArr[c];
        }
    }
    
    void mergeSorting(int arr[], int left, int right)
    {
        if (left == right) {return;}
        int mid = (left + right)/2;
        mergeSorting(arr, left, mid);
        mergeSorting(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
    void mergeSort(int arr[], int n){
        mergeSorting(arr, 0, n-1);
    }
};
