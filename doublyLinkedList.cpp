#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;
    public:
        Node(int value)
        {
            data = value;
            prev = nullptr;
            next = nullptr;
        }
    public:
        Node(int value, Node* prevAdress, Node* nextAddress)
        {
            data = value;
            prev = prevAdress;
            next = nextAddress;
        }
};


Node* arrayToLL(int n, int arr[])
{
  Node* head = new Node(arr[0]);
  Node* tail = head;
  for(int i=1;i<n;i++)
  {
      Node* temp = new Node(arr[i]);
      tail -> next = temp;
      temp->prev = tail;
      tail = tail -> next;
  }
  return head;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp != nullptr)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main() {
  int n = 5;
  int arr[] = {1, 2, 3, 4, 5};
  Node* head = arrayToLL(n, arr);
  display(head);
  return 0;
}
