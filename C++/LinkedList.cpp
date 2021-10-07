// Main function of the C++ program.

#include <bits/stdc++.h>
using namespace std;

// Creating a node
class Node {
  public:
  int value;
  Node* next;
  Node(int v) {
      value = v;
      next = nullptr;
  }
};


int main()
{

    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(3);
    one->next = two;
    two->next = three;

    // print the linked list value
     Node* head = one;
     while (head != nullptr) {
        cout << head->value << " ";
        head = head->next;
      }

    return 0;
}
/* 
Output: 
1 2 3 
*/
