#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int value)
        {
            data = value;
            next = nullptr;
        }
};

Node* arrayToLL(int n, int arr[]) {
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1;i<n;i++)
    {
        Node* temp = new Node(arr[i]);
        current -> next = temp;
        current = current -> next;
    }
    return head;
}


void displayLL(Node* head)
{
    Node* temp = head;
    while(temp != nullptr)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

//deletion at end
Node* deleteTail(Node* head)
{
    if (head == nullptr) return head;
    else if (head -> next == nullptr) 
    {
        Node* temp = head;
        head = nullptr;
        delete temp;
        return head;
    }
    Node* temp = head;
    while(temp->next->next != nullptr)
    {
        temp = temp -> next;
    }
    Node* secondLast = temp -> next;
    temp -> next = nullptr;
    delete secondLast;
    return head;
}

//delete head
Node* deleteHead(Node* head)
{
    if (head == nullptr) return head;
    Node* temp = head;
    head = head -> next;
    delete temp;
    return head;
}

Node* deleteByK(Node* head, int k)
{
    if (head == nullptr) return head;
    if (k == 0) 
    {
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    else
    {
        Node* temp = head;
        int count = 0;
        while(temp->next != nullptr)
        {
           if (count == k-1)
           {
              Node* n = temp -> next;
              temp->next = temp->next->next;
              delete n;
              break;
           }
           temp = temp -> next;
           count++;
        }
    }
    return head;
}

Node* deleteByValue(Node* head, int x)
{
    if (head == nullptr) return head;
    if (head->data == x) 
    {
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    else
    {
        Node* temp = head;
        int count = 0;
        while(temp->next != nullptr)
        {
           if (temp ->next ->data == x)
           {
              Node* n = temp -> next;
              temp->next = temp->next->next;
              delete n;
              break;
           }
           temp = temp -> next;
           count++;
        }
    }
    return head;
}


int main() {
  int n = 5, arr[] = {1, 2, 3, 4, 5};
  int x = 4;
  Node* head = arrayToLL(n, arr);
  head = deleteByValue(head, x);
  displayLL(head);
  return 0;
}
