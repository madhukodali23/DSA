#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAscendingNumberTriangle(int n) {
        int count  = 1;
        for(int i = 0 ; i< n; i++)
        {
            for(int j = 0 ; j <= i; j++)
            {
                cout << count << " ";
                count++;
            }
            cout << endl;
        }
        
    }
};
