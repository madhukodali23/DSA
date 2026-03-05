#include<bits/stdc++.h>
using namespace std;

void kadanes_algo()
{
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int maxSum = INT_MIN;
    int currSum = 0;
    int start = -1;
    int maxStart = -1;
    int end = -1;
    for(int i = 0; i < arr.size(); i++)
    {
        if (currSum == 0)
        {
            start = i;
        }
        currSum += arr[i];
        if (currSum > maxSum)
        {
            maxSum = currSum;
            maxStart = start;
            end = i;
        }
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxStart << " " << end;
}
 
int main() {
  kadanes_algo();
  return 0;
}
