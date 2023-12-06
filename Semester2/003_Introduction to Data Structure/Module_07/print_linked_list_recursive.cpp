#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int value;
  Node *next;
  Node(int value) {
    this->value = value;
    this->next = NULL;
  }
};

void print_linked_list(Node *head) {
  if (head == NULL) {
    return;
  }
  cout << head->value << endl;
  print_linked_list(head->next);
}
void print_linked_list_reversely(Node *head) {
  if (head == NULL) {
    return;
  }
  print_linked_list_reversely(head->next);
  cout << head->value << endl;
}

void sort_linked_list(Node *head) {
  Node *i;
  Node *j;
  for (i = head; i->next != NULL; i = i->next) {
    for (j = head->next; j != NULL; j = j->next) {
      if (i->value > j->value) {
        swap(i->value, j->value);
      }
    }
  }
}

int size_of_linked_list(Node *head) {
  int count = 0;
  Node *temp = head;
  while (temp) {
    count++;
    temp = temp->next;
  }
  return count;
}

// O(n) time complexity
void take_input_linked_list(Node *&head, Node *&tail, int value) {
  Node *newNode = new Node(value);
  if (head == NULL) {
    head = newNode;
    tail = newNode;
  }
  tail->next = newNode;
  tail = newNode;
}

int main() {
  // Write your code here
  // Old way
  // of
  // Taking Singly
  // List input
  /*
  Node * head = new Node(20);
  Node * node1 = new Node(15);
  Node * node2 = new Node(10);
  Node * node3 = new Node(5);

  head->next = node1;
  node1->next = node2;
  node2->next = node3;
  */

  Node *head = NULL;
  Node *tail = NULL;
  int val;
  while (cin >> val) {
    if (val < 0)
      break;
    take_input_linked_list(head, tail, val);
  }

  cout << "Printing Linked List" << endl;
  print_linked_list(head);

  cout << "Printing Linked List Reversely" << endl;
  print_linked_list_reversely(head);

  sort_linked_list(head);

  cout << "Printing Sorted Linked List" << endl;
  print_linked_list(head);

  cout << "Size of Linked List" << endl;
  int count = size_of_linked_list(head);
  cout << count << endl;
  return 0;
}
