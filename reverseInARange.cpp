#include <bits/stdc++.h>
using namespace std;

/* 
class Node {
    public:
        int data;
        Node* next;
        
        Node(): data(0), next(nullptr) {}
        Node(int data) : data(data), next(nullptr) {}
        Node(int data, Node* next) : data(data), next(next) {}
};
*/

class solution {
public:
    Node* reverseBetween(Node* head, int left, int right) {
        Node* temp = head;
        stack<int> st;
        int count = 1;
        while (temp != nullptr)
        {
            if (count >= left && count <= right)
            {
                st.push(temp -> data);
            }
            temp = temp -> next;
            count++;
        }
        
        temp = head;
        count = 1;
        while (temp != nullptr)
        {
           if (count >= left && count <= right)
            {
                temp -> data = st.top();
                st.pop();
            }
            count++;
            temp = temp -> next;
        }
        return head;
    }
};
