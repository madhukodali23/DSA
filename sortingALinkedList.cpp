#include<bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int value, Node* address){
            data = value;
            next = address;
        }
    public:
        Node(int value){
            data = value;
            next = NULL;
        }
};
*/

class solution {
public:
   /* Node* solution1(Node* head)
    {
        multiset<int> mset;
        Node* temp = head;
        while (temp != nullptr)
        {
            mset.insert(temp ->data);
            temp = temp -> next;
        }
      temp = head;
      for(auto k : mset)
      {
          temp -> data = k;
          temp = temp -> next;
      }
      return head;
    } */
    
    Node* SortLL(Node* head) {
        Node* prev_0 = nullptr;
        Node* prev_1 = nullptr;
        Node* prev_2 = nullptr;
        
        Node* prev0_start = nullptr;
        Node* prev1_start = nullptr;
        Node* prev2_start = nullptr;
        
        Node* temp = head;
        while (temp != nullptr)
        {
            if (temp -> data == 0)
            {
                if (prev_0 == nullptr)
                {
                    prev0_start = temp;
                }
                else
                {
                    prev_0 -> next = temp;
                }
                prev_0 = temp;
            }
            else if (temp -> data == 1)
            {
                if (prev_1 == nullptr)
                {
                    prev1_start = temp;
                }
                else
                {
                    prev_1 -> next = temp;
                }
                prev_1 = temp;
            }
            else
            {
                if (prev_2 == nullptr)
                {
                    prev2_start = temp;
                }
                else
                {
                    prev_2 -> next = temp;
                }
                prev_2 = temp;
            }
            temp = temp -> next;
        }
        if(prev_0) 
        {
           if (prev1_start)  prev_0 -> next = prev1_start;
           else prev_0 -> next =  prev2_start;
        }
        if (prev_1) prev_1 -> next = prev2_start;
        if (prev_2) prev_2 -> next = nullptr;
        if(prev_0) return prev0_start ;
        if (prev_1) return prev1_start;
        return prev2_start;
    }
};
