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

Node* deleteAtHead(Node* head)
{
    if (head == nullptr) return head;
    if (head -> next == nullptr)
    {
        Node* temp = head;
        head = nullptr;
        delete temp;
        return head;
    }
    Node* temp = head;
    head = head -> next;
    head -> prev = nullptr;
    temp -> next = nullptr;
    delete temp;
    return head;
}

Node* deleteAtTail(Node* head)
{
    if (head == nullptr)
    {
        return head;
    }
    if (head -> next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node* tail = head;
    while(tail -> next -> next != nullptr)
    {
        tail = tail -> next;
    }
    Node* temp = tail -> next;
    tail -> next = nullptr;
    temp -> prev = nullptr;
    delete temp;
    return head;
}

Node* deleteK(Node* head,int k)
{
    if (head == nullptr) return head;
    Node* temp = head;
    int count = 0;
    while( temp  != nullptr)
    {
        if (count == k)
        {
            break;
        }
        count++;
        temp = temp -> next;
    }
    Node* curr = temp;
    Node* back = curr -> prev;
    Node* front = curr -> next;
    if (back == nullptr && front == nullptr)
    {
        if (k == 0)
        {
            delete head;
            return nullptr;
        }
    }
    else if (back == nullptr)
    {
       return deleteAtHead(head);
    }
   else if (front == nullptr)
    {
        return deleteAtTail(head);
    }
  else {
    back -> next = front;
    front -> prev = curr; 
    curr -> next = nullptr;
    curr -> prev = nullptr;
    delete curr;
    return head;
  }
    return head;
}



int main() {
  int n = 5;
  int arr[] = {1, 2, 3, 4, 5};
  Node* head = arrayToLL(n, arr);
  head = deleteK(head, 2);
  display(head);
  return 0;
}
