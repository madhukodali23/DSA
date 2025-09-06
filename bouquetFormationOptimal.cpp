   #include<bits/stdc++.h>
   using namespace std;
   
    int isPossible(int arr[], int n, int k, int m, int days)
    {
        int count = 0;
        int boquets = 0;
        for(int i=0;i<=n-1;i++)
        {
            if (arr[i] <= days)
            {
                count++;
                if (count == k)
                {
                    boquets++;
                    count = 0;
                }
            }
            else
            {
                count = 0;
            }
        }
        return boquets;
    }
    
    int bouquetFormation(int arr[], int n, int k, int m){
        if (n < k * m) return -1;
        int maxElement = *max_element(arr, arr+n);
        int minElement = *min_element(arr, arr+n);
         int low = minElement;
         int high = maxElement;
         int ans = maxElement;
         while (low <= high)
         {
             int mid = low + (high-low)/2;
             if (isPossible(arr, n, k, m, mid) >= m)
             {
                 ans = mid ;
                 high = mid - 1;
             }
             else 
             {
                 low = mid + 1;
             }
         }
         return ans;
    }
    
    int main() {
        int n = 6, m = 2, k = 2;
        int arr[] = { 2, 1, 1, 2, 3, 3};
        cout << bouquetFormation(arr, n, k, m);
        return 0;
    }
