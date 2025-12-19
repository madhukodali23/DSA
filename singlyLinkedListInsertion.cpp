#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node* next;   public:
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

//insert at begining
Node* insertAtBegining(Node* head, int x)
{
    Node* newnode = new Node(x);
    newnode -> next = head;
    head = newnode;
    return head;
}

//insert at end
Node* insertAtTail(Node* head, int x)
{
    Node* newnode = new Node(x);
    if (head == nullptr) 
    {
        head = newnode;
        return head;
    }
    Node* temp = head;
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp ->next = newnode;
    return head;
}

//insert at k 
Node* insertAtK(Node* head, int k, int x)
{
    Node* newnode = new Node(x);
    if (head == nullptr) {
        if (k == 0)
        {
            newnode-> next = head;
            head = newnode;
            return head;
        }
        if (k != 0) return head;
   }
    if (k == 0)
    {
        newnode-> next = head;
        head = newnode;
        return head;
    }
    int count = 0;
    Node* temp = head;
    while(temp != nullptr)
    {
        if (count == k-1)
        {
            newnode-> next = temp-> next;
            temp->next = newnode;
            break;
        }
        temp = temp -> next;
        count++;
    }
    return head;
}

//insert at before value x
Node* insertBeforeValueX(Node* head, int x, int k)
{
    if (head == nullptr) 
    {
        return head;
    }
    
    if (head -> data == x)
    {
        Node* n = new Node(k);
        n -> next = head;
        head = n;
        return head;
    }
    
    Node* temp = head;
    while(temp != nullptr)
    {
        if (temp->next->data == x)
        {
            Node* newnode = new Node(k);
            newnode -> next = temp->next;
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main() {
  int n = 5, arr[] = {1, 2, 3, 4, 5};
  Node* head = arrayToLL(n, arr);
  head = insertBeforeValueX(head, 5, 40);
  displayLL(head);
  return 0;
}
