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

int main() {
  int n = 5, arr[] = {1, 2, 3, 4, 5};
  Node* head = arrayToLL(n, arr);
  displayLL(head);
  deleteTail(head);
  displayLL(head);
  deleteTail(head);
  displayLL(head);
  return 0;
}
