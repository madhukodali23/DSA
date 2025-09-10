#include<bits/stdc++.h>
using namespace std;


void subSequence(int arr[], int n, vector<int> &v, int i)
{
    if (i == 3)
    {
        for(auto k : v) cout << k << " ";
        cout << endl;
        return;
    }
    
    //not pick
    subSequence(arr, n, v, i+1);
    v.push_back(arr[i]);
    
    
   //pick
    subSequence(arr, n, v, i+1);
    v.erase(v.end()-1);
}



int main() {
    int n = 3;
    int arr[] = {4, 5, 6};
    vector<int> v;
    subSequence(arr, n, v, 0);
    return 0;
}
   
