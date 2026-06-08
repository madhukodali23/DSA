#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int #include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int candidate = arr[0];
        for(int i = 1; i < n; i++)
        {
            if (count == 0)
            {
                candidate = arr[i];
                count = 1;
            }
            else if (candidate == arr[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return candidate;
    }
};(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int candidate = arr[0];
        for(int i = 1; i < n; i++)
        {
            if (count == 0)
            {
                candidate = arr[i];
                count = 1;
            }
            else if (candidate == arr[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return candidate;
    }
};
