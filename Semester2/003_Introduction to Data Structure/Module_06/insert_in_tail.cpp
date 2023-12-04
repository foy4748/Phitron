#include<bits/stdc++.h>

using namespace std;

class Node{
	public:
		int value;
		Node * next;
		Node(int value){
			this->value = value;
			this->next = NULL;
		}
};

// Print LinkedList
void print_linked_list(Node * head){
	Node * temp = head;
	while(temp){
		cout<<temp->value<<endl;
		temp = temp->next;
	}
}

// Insertion in tail
void insert_to_tail(Node* & head, int value) {
	Node * newNode = new Node(value);
	if(head == NULL){
		head = newNode;
		return;
	}

	Node * temp = head;
	while(temp->next){
		temp = temp->next;
	}
	temp->next = newNode;

}

// Insertion between
void insertion_between(Node* & head, int idx, int newValue) {
	Node * newNode = new Node(newValue);

	Node * temp = head;
	for(int i = 0; i<idx; i++){
		temp = temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;
}

// Insert before head
void insertion_before_head(Node* & head, int idx, int newValue) {
	Node * newNode = new Node(newValue);
	newNode->next = head;
	head = newNode;
}

// Delete between
void delete_between(Node* & head, int idx) {

	Node * temp = head;
	for(int i = 0; i<idx-1; i++){
		temp = temp->next;
	}

	Node * toBeDeleted = temp->next;
	temp->next = temp->next->next;
	delete toBeDeleted;
}

// Delete head
void delete_head(Node* & head) {


	Node * toBeDeleted = head;
	head = head->next;
	delete toBeDeleted;
}
int main()
{
	// Write your code here

	Node * h1 = NULL;
	insert_to_tail(h1, 7);
	insert_to_tail(h1, 10);
	insert_to_tail(h1, 5);
	insert_to_tail(h1, 50);

	print_linked_list(h1);

	insertion_between(h1,1,100);
	
	cout<<"New LinkedList"<<endl;
	print_linked_list(h1);

	insertion_before_head(h1,1,0);
	cout<<"Inserted before head"<<endl;
	print_linked_list(h1);

	delete_between(h1,1);
	cout<<"Deleted at idx 1"<<endl;
	print_linked_list(h1);

	delete_head(h1);
	cout<<"Deleted Head"<<endl;
	print_linked_list(h1);



	return 0;
}
