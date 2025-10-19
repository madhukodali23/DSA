#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int f(int i, int j)
    {
        if (i == 0 || j == 0) return 1;
        int left = f(i, j-1);
        int right = f(i-1, j);
        return left + right;
    }
    int uniquePaths(int m, int n) {
        return f(m-1, n-1);
    }
};
