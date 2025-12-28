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

Node* evenOddLinkedList(Node* head) 
{
    Node* temp = head;
    vector<int> v;
    while (temp != nullptr)
    {
        v.push_back(temp -> data);
        temp = temp -> next -> next;
    }
    if (temp != nullptr)
    {
        v.push_back(temp -> data);
    }
    temp = head -> next;
    while (temp != nullptr && temp -> next != nullptr)
    {
        v.push_back(temp -> data);
        temp = temp -> next -> next;
    }
    if (temp != nullptr && temp -> next != nullptr) 
    {
        v.push_back(temp -> data);
    }
    temp = head;
    for(int i=0;i<v.size();i++)
    {
        temp -> data = v[i];
        temp = temp -> next;
    }
    return head;
}

Node* evenOddLinkedListOptimized(Node* head) 
{
    Node* evenTemp = head;
    Node* oddTemp = head -> next;
    Node* oddHead = head -> next;
    while (oddTemp != nullptr && oddTemp -> next != nullptr) // TC: O(n) SC: O(1)
    {
        evenTemp -> next = evenTemp -> next -> next;
        evenTemp = evenTemp -> next;
        oddTemp -> next = oddTemp -> next -> next;
        oddTemp = oddTemp -> next;
    }
    evenTemp -> next = oddHead;
    return head;
}

int main() {
  int n = 5, arr[] = {1, 2, 3, 4, 5};
  Node* head = arrayToLL(n, arr);
  head = evenOddLinkedListOptimized(head);
  displayLL(head);
  return 0;
}
