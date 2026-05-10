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
        Node* temp1 = head;
        vector<pair<int, int>> v;
        while (temp1 != nullptr)
        {
            Node* temp2 = temp1 -> next;
            while (temp2 != nullptr)
            {
                if (temp1 -> data + temp2 -> data == val)
                {
                    v.push_back({temp1->data, temp2->data});
                }
                temp2 = temp2 -> next;
            }
            temp1 = temp1 -> next;
        }
        return v;
    }
};
