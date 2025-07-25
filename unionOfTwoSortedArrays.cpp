#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> unionOfTwoSortedArrays(vector<int> a, vector<int> b){
        set<int> st;
        vector<int> v1;
        for(int i = 0; i<a.size();i++) st.insert(a[i]);
        for(int i = 0; i<b.size();i++) st.insert(b[i]);
        for(auto k : st) {
            v1.push_back(k);
        }
        return v1;
    }
};
