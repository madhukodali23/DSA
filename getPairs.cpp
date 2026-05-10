#include<bits/stdc++.h>
using namespace std;

/*class Node {
  public:
  int data;
  Node* prev;
  Node* next;

  Node(int data) : data(data), prev(nullptr), next(nullptr) {}
};*/

class solution {
public:
    vector<pair<int, int>> getPairs(Node* head, int val) {
        Node* temp = head;
        vector<pair<int, int>> v;
        map<int, int> mp; // O(n)
        while (temp != nullptr) // O(n)
        {
            int data = temp -> data;
            int rem = val - data;
            mp[rem] = data;
            if (mp.find(data) != mp.end() && data != mp[data]) // O(log(n))
            {
                v.push_back({mp[temp -> data], temp -> data});
            }
            temp = temp -> next;
        }
        reverse(v.begin(), v.end()); // O(n)
        return v;
    }
};
