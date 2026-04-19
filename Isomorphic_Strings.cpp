#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isomorphic(string s1, string s2) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
        if (s1.length() != s2.length()) return false;
        int n = s1.size();
        for(int i = 0; i < n; i++)
        {
            char a = s1.at(i);
            char b = s2.at(i);
            if (mp1.find(a) == mp1.end())
            {
                mp1[a] = b;
            }
            if (mp2.find(b) == mp2.end())
            {
                mp2[b] = a;
            }
            if (mp1[a] != b) return false;
            if (mp2[b] != a) return false;
        }
        return true;
    }
};
