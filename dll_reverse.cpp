#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
          int data;
          Node* prev;
          Node* next;
     public:
          Node(int value)
          {
              data = value;
              prev = nullptr;
              next = nullptr;
          }
};

Node* create_dll(int n, vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1;i<n;i++)
    {
        Node* temp = new Node(arr[i]);
        temp -> prev = current;
        current -> next = temp;
        current = current -> next;
    }
    return head;
}

void display(Node*  head) {
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* reverse_dll(Node* head)
{
    Node* temp = head;
    stack<int> st; //sc: O(n);
    while (temp != nullptr)
    {
        st.push(temp -> data);
        temp = temp -> next;
    }
    temp = head;
    while (temp != nullptr) //tc : O(n)
    {
        temp -> data  = st.top();
        st.pop();
        temp = temp -> next;
    }
    return head;
}
 
int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
      cin >> arr[i];
  }
  Node* head = create_dll(n, arr);
  head = reverse_dll(head);
  display(head);
  return 0;
}
