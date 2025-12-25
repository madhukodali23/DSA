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

Node* addition(Node* head1, Node* head2)
{
    Node* head = new Node(-1);
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* current = head;
    int carry = 0;
    int sum = 0;
    while (temp1 || temp2)
    {
        sum =  carry;
        if (temp1) sum += temp1 -> data;
        if (temp2) sum += temp2 -> data;
        Node* temp = new Node(sum % 10);
        carry = sum / 10;
       if (temp1) temp1 = temp1 -> next;
       if (temp2) temp2 = temp2 -> next;
        current -> next = temp;
        current = current -> next;
    }
    if (carry != 0) 
    {
        Node* lastNode = new Node(carry);
        current -> next = lastNode;
    }
    return head = head -> next;
}

int main() {
  int n1 = 3, n2 = 2;
  int arr1[] = {6, 8, 9}, arr2[] = {8, 3};
  Node* head1 = arrayToLL(n1, arr1);
  Node* head2 = arrayToLL(n2, arr2);
  Node* head = addition(head1, head2);
  displayLL(head);
  return 0;
}
