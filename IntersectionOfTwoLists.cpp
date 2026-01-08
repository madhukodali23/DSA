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
    Node* intersectionOfTwoLL(Node* head1, Node* head2){
       Node* temp1 = head1;
       Node* temp2 = head2;
       int count1 = 0, count2 = 0;
       while (temp1 != nullptr) 
       {
           count1++;
           temp1 = temp1 -> next;
       }
       while (temp2 != nullptr) 
       {
           count2++;
           temp2 = temp2 -> next;
       }
       int count = abs(count1 - count2);
       temp1 = head1;
       temp2 = head2;
       if (count1 > count2) 
       {
           for(int i=0;i<count;i++)
           {
               temp1 = temp1 -> next;
           }
       }
       else
       {
           for(int i=0;i<count;i++)
           {
               temp2 = temp2 -> next;
           }
       }
       while (temp1 != nullptr && temp2 != nullptr)
       {
           if (temp1 == temp2) return temp1;
           temp1 = temp1 -> next;
           temp2 = temp2 -> next;
       }
       return nullptr;
    }
};
