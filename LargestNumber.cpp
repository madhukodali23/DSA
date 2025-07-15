#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {8, 5, 2, 4, 1};
    int maximum = INT_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    cout << "Maximum Number: " << maximum;
    return 0;
}
