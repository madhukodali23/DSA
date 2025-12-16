#include<bits/stdc++.h>
using namespace std;
 
class Node {
    public :
        int data;
        Node* next;
    public :
        Node(int value)
        {
            data = value;
            next = nullptr;
        }
};

Node* arrayToLinkedlist(int n, int arr[])
{
      Node *head = new Node(arr[0]);
      Node *curr = head;
      for(int i=1;i<n;i++)
      {
           Node* temp = new Node(arr[i]);
           curr->next = temp;
           curr = temp;
      }
      return head;
}

int countNodes(Node *head)
{
    int count = 0;
    Node* temp = head;
    while(temp != nullptr)
    {
        count++;
        temp = temp -> next;
    }
    return count;
}

void displayLinkedList(Node *head)
{
    Node* temp = head;
    if (temp == nullptr) {
        cout << "Traversing Not Possible" << endl;
        return;
    }
    while (temp != nullptr)
      {
          cout << temp->data << " ";
          temp = temp -> next;
      }
      cout << endl;
}

string isFound(Node *head, int searchValue)
{
    Node* temp = head;
    while(temp != nullptr)
    {
        if (temp -> data == searchValue)
        {
            return "Yes";
        }
        temp = temp -> next;
    }
    return "No";
}

 
 
int main() {
  int n = 5;
  int arr[] = {1, 2, 3, 4, 5};
  int searchValue = 4;
  Node* head = arrayToLinkedlist(n, arr);
  displayLinkedList(head);
  cout << isFound(head, searchValue);
  return 0;
}
